#include "networksettings.h"
#include "mainwindow.h"
#include "ui_networksettings.h"

void NetworkSettings::onModeChanged(bool isRegulator)
{
    ui->startServerButton->setEnabled(isRegulator);
    ui->connectButton->setEnabled(!isRegulator);
    ui->ipLineEdit->setEnabled(!isRegulator);
    ui->portLineEdit->setEnabled(true);
}
NetworkSettings::NetworkSettings(Manager *manager, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NetworkSettings)
    , manager(manager)

{
    ui->setupUi(this);

    connect(manager, &Manager::statusChanged, ui->statusLabel, &QLabel::setText);

    connect(ui->startServerButton, &QAbstractButton::clicked, this, [this, manager]() {
        double port = ui->portLineEdit->text().toDouble();
        manager->startServer(port);
    });

    connect(ui->connectButton, &QAbstractButton::clicked, this, [this, manager]() {
        QString host = ui->ipLineEdit->text();
        double port = ui->portLineEdit->text().toDouble();
        manager->connectToServer(host, port);
    });

    connect(manager, &Manager::statusChanged, ui->statusLabel, &QLabel::setText);


    connect(manager, &Manager::dataReceivedChanged, this, &NetworkSettings::updateLampka);


}

NetworkSettings::~NetworkSettings()
{
    delete ui;
}

void NetworkSettings::resetLampka()
{
    ui->statusLampka->setStyleSheet("QLabel { background-color : none; color : white; }");
    ui->statusLampka->setText("lampka");
}


void NetworkSettings::updateLampka(bool czyWyrabia)
{
    ui->statusLampka->setStyleSheet("QLabel { border: 2px solid white; }");

    QTimer::singleShot(200, [this, czyWyrabia]() {
        if (!czyWyrabia) {
            ui->statusLampka->setStyleSheet(
                "QLabel { background-color : red; color : white; border: none; }");
            ui->statusLampka->setText("Stan: Nie wyrabia");
        } else {
            ui->statusLampka->setStyleSheet(
                "QLabel { background-color : green; color : white; border: none; }");
            ui->statusLampka->setText("Stan: Wyrabia");
        }
    });
}

void NetworkSettings::on_startServerButton_clicked()
{
    emit objectModeActivated();
    qDebug() << "Sygnał startServerRequested został wyemitowany.";
}

void NetworkSettings::on_stopServerButton_clicked()
{
    manager->stopServer();
    emit networkModeDisabled();

}

void NetworkSettings::on_connectButton_clicked()
{
    emit regulatorModeActivated();
    manager->startTaktowanie();
}

void NetworkSettings::on_disconnectButton_clicked()
{
    manager->disconnectClient();
    manager->stopTaktowanie();
    emit networkModeDisabled();
    qDebug() << "Połączenie sieciowe zatrzymane. Przełączono do trybu lokalnego obiektu.";
    resetLampka();
}

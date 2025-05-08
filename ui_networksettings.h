/********************************************************************************
** Form generated from reading UI file 'networksettings.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKSETTINGS_H
#define UI_NETWORKSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkSettings
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *portLineEdit;
    QLineEdit *ipLineEdit;
    QLabel *portLabel;
    QLabel *statusLabel;
    QLabel *statusLampka;
    QLabel *ipLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *startServerButton;
    QPushButton *stopServerButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *connectButton;
    QPushButton *disconnectButton;

    void setupUi(QDialog *NetworkSettings)
    {
        if (NetworkSettings->objectName().isEmpty())
            NetworkSettings->setObjectName("NetworkSettings");
        NetworkSettings->resize(421, 300);
        buttonBox = new QDialogButtonBox(NetworkSettings);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        layoutWidget = new QWidget(NetworkSettings);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 403, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        portLineEdit = new QLineEdit(layoutWidget);
        portLineEdit->setObjectName("portLineEdit");

        gridLayout->addWidget(portLineEdit, 4, 0, 1, 1);

        ipLineEdit = new QLineEdit(layoutWidget);
        ipLineEdit->setObjectName("ipLineEdit");

        gridLayout->addWidget(ipLineEdit, 3, 0, 1, 1);

        portLabel = new QLabel(layoutWidget);
        portLabel->setObjectName("portLabel");

        gridLayout->addWidget(portLabel, 4, 2, 1, 1);

        statusLabel = new QLabel(layoutWidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setAutoFillBackground(false);
        statusLabel->setFrameShape(QFrame::Shape::Box);

        gridLayout->addWidget(statusLabel, 5, 0, 1, 1);

        statusLampka = new QLabel(layoutWidget);
        statusLampka->setObjectName("statusLampka");

        gridLayout->addWidget(statusLampka, 5, 2, 1, 1);

        ipLabel = new QLabel(layoutWidget);
        ipLabel->setObjectName("ipLabel");

        gridLayout->addWidget(ipLabel, 3, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        startServerButton = new QPushButton(layoutWidget);
        startServerButton->setObjectName("startServerButton");

        horizontalLayout->addWidget(startServerButton);

        stopServerButton = new QPushButton(layoutWidget);
        stopServerButton->setObjectName("stopServerButton");

        horizontalLayout->addWidget(stopServerButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        connectButton = new QPushButton(layoutWidget);
        connectButton->setObjectName("connectButton");

        horizontalLayout_2->addWidget(connectButton);

        disconnectButton = new QPushButton(layoutWidget);
        disconnectButton->setObjectName("disconnectButton");

        horizontalLayout_2->addWidget(disconnectButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(NetworkSettings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NetworkSettings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NetworkSettings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NetworkSettings);
    } // setupUi

    void retranslateUi(QDialog *NetworkSettings)
    {
        NetworkSettings->setWindowTitle(QCoreApplication::translate("NetworkSettings", "Dialog", nullptr));
        portLabel->setText(QCoreApplication::translate("NetworkSettings", "numer portu", nullptr));
        statusLabel->setText(QString());
        statusLampka->setText(QCoreApplication::translate("NetworkSettings", "lampka", nullptr));
        ipLabel->setText(QCoreApplication::translate("NetworkSettings", "IP", nullptr));
        startServerButton->setText(QCoreApplication::translate("NetworkSettings", "Start serwer", nullptr));
        stopServerButton->setText(QCoreApplication::translate("NetworkSettings", "Stop serwer", nullptr));
        connectButton->setText(QCoreApplication::translate("NetworkSettings", "Po\305\202\304\205cz z serwerem", nullptr));
        disconnectButton->setText(QCoreApplication::translate("NetworkSettings", "Roz\305\202\304\205cz z serwerem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkSettings: public Ui_NetworkSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKSETTINGS_H

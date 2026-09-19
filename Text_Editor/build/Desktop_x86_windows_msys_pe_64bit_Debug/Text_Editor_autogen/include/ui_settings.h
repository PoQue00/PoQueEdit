/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;

    void setupUi(QMainWindow *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName("Settings");
        Settings->resize(800, 600);
        centralwidget = new QWidget(Settings);
        centralwidget->setObjectName("centralwidget");
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 30, 101, 24));
        Settings->setCentralWidget(centralwidget);

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QMainWindow *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "MainWindow", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Settings", "Default", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Settings", "Light", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Settings", "Dark", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Settings", "Light Red", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Settings", "Dark Red", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Settings", "Light Orange", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Settings", "Dark Orange", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Settings", "Light Yellow", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("Settings", "Dark Yellow", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("Settings", "Light Green", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("Settings", "Dark Green", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("Settings", "Light Blue", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("Settings", "Dark Blue", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("Settings", "Light Purple", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("Settings", "Dark Purple", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("Settings", "Light Pink", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("Settings", "Dark Pink", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("Settings", "Light Cyan", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("Settings", "Dark Cyan", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H

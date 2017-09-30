/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QOpenGLWidget *openGLWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *start_pushButton;
    QPushButton *stop_pushButton;
    QPushButton *reboot_pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(923, 428);
        openGLWidget = new QOpenGLWidget(Widget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(20, 30, 681, 311));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(790, 30, 111, 18));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(810, 110, 59, 18));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(820, 180, 91, 18));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(820, 250, 59, 18));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(790, 60, 113, 32));
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(790, 140, 113, 32));
        lineEdit_3 = new QLineEdit(Widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(790, 210, 113, 32));
        lineEdit_4 = new QLineEdit(Widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(790, 270, 113, 32));
        start_pushButton = new QPushButton(Widget);
        start_pushButton->setObjectName(QStringLiteral("start_pushButton"));
        start_pushButton->setGeometry(QRect(40, 350, 88, 34));
        stop_pushButton = new QPushButton(Widget);
        stop_pushButton->setObjectName(QStringLiteral("stop_pushButton"));
        stop_pushButton->setGeometry(QRect(170, 350, 88, 34));
        reboot_pushButton = new QPushButton(Widget);
        reboot_pushButton->setObjectName(QStringLiteral("reboot_pushButton"));
        reboot_pushButton->setGeometry(QRect(310, 350, 88, 34));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "Numder of Bols", 0));
        label_2->setText(QApplication::translate("Widget", "Max V", 0));
        label_3->setText(QApplication::translate("Widget", "Size of  Boals", 0));
        label_4->setText(QApplication::translate("Widget", "TextLabel", 0));
        start_pushButton->setText(QApplication::translate("Widget", "Start", 0));
        stop_pushButton->setText(QApplication::translate("Widget", "Stop", 0));
        reboot_pushButton->setText(QApplication::translate("Widget", "Reboot", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

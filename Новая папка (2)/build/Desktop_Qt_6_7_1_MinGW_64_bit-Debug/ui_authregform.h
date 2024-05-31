/********************************************************************************
** Form generated from reading UI file 'authregform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHREGFORM_H
#define UI_AUTHREGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthRegForm
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelPassword;
    QLineEdit *lineEmail;
    QLineEdit *lineLogin;
    QLineEdit *linePassword;
    QLabel *labelEmail;
    QLabel *labelLogin;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushAuth;
    QPushButton *pushRegister;
    QPushButton *pushChange;

    void setupUi(QWidget *AuthRegForm)
    {
        if (AuthRegForm->objectName().isEmpty())
            AuthRegForm->setObjectName("AuthRegForm");
        AuthRegForm->setEnabled(true);
        AuthRegForm->resize(1038, 611);
        AuthRegForm->setMouseTracking(false);
        AuthRegForm->setFocusPolicy(Qt::NoFocus);
        AuthRegForm->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(AuthRegForm);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(170, 188, 711, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelPassword = new QLabel(gridLayoutWidget);
        labelPassword->setObjectName("labelPassword");

        gridLayout->addWidget(labelPassword, 1, 0, 1, 1);

        lineEmail = new QLineEdit(gridLayoutWidget);
        lineEmail->setObjectName("lineEmail");

        gridLayout->addWidget(lineEmail, 2, 1, 1, 1);

        lineLogin = new QLineEdit(gridLayoutWidget);
        lineLogin->setObjectName("lineLogin");

        gridLayout->addWidget(lineLogin, 0, 1, 1, 1);

        linePassword = new QLineEdit(gridLayoutWidget);
        linePassword->setObjectName("linePassword");

        gridLayout->addWidget(linePassword, 1, 1, 1, 1);

        labelEmail = new QLabel(gridLayoutWidget);
        labelEmail->setObjectName("labelEmail");

        gridLayout->addWidget(labelEmail, 2, 0, 1, 1);

        labelLogin = new QLabel(gridLayoutWidget);
        labelLogin->setObjectName("labelLogin");

        gridLayout->addWidget(labelLogin, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushAuth = new QPushButton(gridLayoutWidget);
        pushAuth->setObjectName("pushAuth");

        horizontalLayout->addWidget(pushAuth);

        pushRegister = new QPushButton(gridLayoutWidget);
        pushRegister->setObjectName("pushRegister");

        horizontalLayout->addWidget(pushRegister);

        pushChange = new QPushButton(gridLayoutWidget);
        pushChange->setObjectName("pushChange");

        horizontalLayout->addWidget(pushChange);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(AuthRegForm);

        QMetaObject::connectSlotsByName(AuthRegForm);
    } // setupUi

    void retranslateUi(QWidget *AuthRegForm)
    {
        AuthRegForm->setWindowTitle(QCoreApplication::translate("AuthRegForm", "Form", nullptr));
        labelPassword->setText(QCoreApplication::translate("AuthRegForm", "Password", nullptr));
        labelEmail->setText(QCoreApplication::translate("AuthRegForm", "Email", nullptr));
        labelLogin->setText(QCoreApplication::translate("AuthRegForm", "Login", nullptr));
        pushAuth->setText(QCoreApplication::translate("AuthRegForm", "Auth", nullptr));
        pushRegister->setText(QCoreApplication::translate("AuthRegForm", "Register", nullptr));
        pushChange->setText(QCoreApplication::translate("AuthRegForm", "Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthRegForm: public Ui_AuthRegForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHREGFORM_H

/********************************************************************************
** Form generated from reading UI file 'posttable.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTTABLE_H
#define UI_POSTTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_posttable
{
public:
    QTableView *tableView;
    QPushButton *goback;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *posttable)
    {
        if (posttable->objectName().isEmpty())
            posttable->setObjectName(QString::fromUtf8("posttable"));
        posttable->resize(912, 600);
        tableView = new QTableView(posttable);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 30, 841, 301));
        goback = new QPushButton(posttable);
        goback->setObjectName(QString::fromUtf8("goback"));
        goback->setGeometry(QRect(20, 480, 191, 81));
        pushButton = new QPushButton(posttable);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(630, 330, 231, 81));
        pushButton_2 = new QPushButton(posttable);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 340, 211, 81));
        pushButton_3 = new QPushButton(posttable);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 340, 211, 61));

        retranslateUi(posttable);

        QMetaObject::connectSlotsByName(posttable);
    } // setupUi

    void retranslateUi(QDialog *posttable)
    {
        posttable->setWindowTitle(QCoreApplication::translate("posttable", "Dialog", nullptr));
        goback->setText(QCoreApplication::translate("posttable", "\320\235\320\260\320\267\320\260\320\264 \320\272 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260\320\274", nullptr));
        pushButton->setText(QCoreApplication::translate("posttable", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("posttable", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("posttable", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class posttable: public Ui_posttable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTTABLE_H

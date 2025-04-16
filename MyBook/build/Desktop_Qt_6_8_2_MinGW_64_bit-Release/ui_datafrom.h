/********************************************************************************
** Form generated from reading UI file 'datafrom.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFROM_H
#define UI_DATAFROM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataFrom
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *title;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *data;

    void setupUi(QWidget *dataFrom)
    {
        if (dataFrom->objectName().isEmpty())
            dataFrom->setObjectName("dataFrom");
        dataFrom->resize(640, 480);
        dataFrom->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 20);"));
        verticalLayout = new QVBoxLayout(dataFrom);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(dataFrom);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        title = new QLabel(frame);
        title->setObjectName("title");
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(26);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("background-color: rgba(30, 30, 91, 200);\n"
"color: rgb(255, 255, 0);"));

        horizontalLayout_2->addWidget(title);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(dataFrom);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        data = new QPlainTextEdit(frame_2);
        data->setObjectName("data");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("STHupo")});
        font1.setPointSize(18);
        data->setFont(font1);
        data->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 255);"));
        data->setReadOnly(true);

        verticalLayout_2->addWidget(data);


        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 3);

        retranslateUi(dataFrom);

        QMetaObject::connectSlotsByName(dataFrom);
    } // setupUi

    void retranslateUi(QWidget *dataFrom)
    {
        dataFrom->setWindowTitle(QCoreApplication::translate("dataFrom", "Form", nullptr));
        title->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dataFrom: public Ui_dataFrom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFROM_H

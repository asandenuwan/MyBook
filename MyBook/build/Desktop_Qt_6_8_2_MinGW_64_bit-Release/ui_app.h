/********************************************************************************
** Form generated from reading UI file 'app.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APP_H
#define UI_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_app
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *proBar;
    QGraphicsView *gv;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *showData;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_4;
    QFrame *showFrame;
    QWidget *addData;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *addTitle;
    QPlainTextEdit *addDatatextBox;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addDataBtn;
    QPushButton *pushButton_2;
    QWidget *deleteData;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *deleteRecodeId;
    QSpacerItem *verticalSpacer;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *enterForDelete;
    QPushButton *cl;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *showBtn;
    QPushButton *addBtn;
    QPushButton *deleteBtn;

    void setupUi(QMainWindow *app)
    {
        if (app->objectName().isEmpty())
            app->setObjectName("app");
        app->resize(971, 888);
        app->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 42, 62);"));
        centralwidget = new QWidget(app);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(frame_5);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Niagara Engraved")});
        font.setPointSize(72);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(46, 46, 68, 150);\n"
"color: rgb(255, 238, 0);"));

        horizontalLayout_3->addWidget(label);


        horizontalLayout_2->addWidget(frame_5);

        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        proBar = new QProgressBar(frame_6);
        proBar->setObjectName("proBar");
        proBar->setValue(24);

        verticalLayout_2->addWidget(proBar);

        gv = new QGraphicsView(frame_6);
        gv->setObjectName("gv");
        gv->setMinimumSize(QSize(304, 231));

        verticalLayout_2->addWidget(gv);


        horizontalLayout_2->addWidget(frame_6);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        stackedWidget = new QStackedWidget(frame_4);
        stackedWidget->setObjectName("stackedWidget");
        showData = new QWidget();
        showData->setObjectName("showData");
        verticalLayout_5 = new QVBoxLayout(showData);
        verticalLayout_5->setObjectName("verticalLayout_5");
        frame_7 = new QFrame(showData);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_7);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_2 = new QLabel(frame_7);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 225, 2);\n"
"color: rgb(0, 0, 127);"));

        horizontalLayout_9->addWidget(label_2);


        verticalLayout_5->addWidget(frame_7);

        scrollArea = new QScrollArea(showData);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 609, 439));
        horizontalLayout_4 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        showFrame = new QFrame(scrollAreaWidgetContents_2);
        showFrame->setObjectName("showFrame");
        showFrame->setStyleSheet(QString::fromUtf8("font: 22pt \"Impact\";"));
        showFrame->setFrameShape(QFrame::Shape::StyledPanel);
        showFrame->setFrameShadow(QFrame::Shadow::Raised);

        horizontalLayout_4->addWidget(showFrame);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_5->addWidget(scrollArea);

        stackedWidget->addWidget(showData);
        addData = new QWidget();
        addData->setObjectName("addData");
        verticalLayout_7 = new QVBoxLayout(addData);
        verticalLayout_7->setObjectName("verticalLayout_7");
        frame_8 = new QFrame(addData);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_8);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(frame_8);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 225, 2);\n"
"color: rgb(0, 0, 127);"));

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_7->addWidget(frame_8);

        frame_9 = new QFrame(addData);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_9);
        verticalLayout_8->setObjectName("verticalLayout_8");
        frame_11 = new QFrame(frame_9);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        addTitle = new QLineEdit(frame_11);
        addTitle->setObjectName("addTitle");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MV Boli")});
        font1.setPointSize(18);
        addTitle->setFont(font1);
        addTitle->setStyleSheet(QString::fromUtf8("color: rgb(255, 218, 11);\n"
"background-color: rgba(0, 0, 127, 120);"));

        verticalLayout_9->addWidget(addTitle);

        addDatatextBox = new QPlainTextEdit(frame_11);
        addDatatextBox->setObjectName("addDatatextBox");
        addDatatextBox->setFont(font1);
        addDatatextBox->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 255);\n"
"background-color: rgba(0, 0, 127, 120);"));

        verticalLayout_9->addWidget(addDatatextBox);


        verticalLayout_8->addWidget(frame_11);

        frame_10 = new QFrame(frame_9);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_10);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        addDataBtn = new QPushButton(frame_10);
        addDataBtn->setObjectName("addDataBtn");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addDataBtn->sizePolicy().hasHeightForWidth());
        addDataBtn->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Impact")});
        font2.setPointSize(24);
        addDataBtn->setFont(font2);
        addDataBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 238, 0);"));

        horizontalLayout_6->addWidget(addDataBtn);

        pushButton_2 = new QPushButton(frame_10);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Impact")});
        font3.setPointSize(24);
        font3.setBold(false);
        pushButton_2->setFont(font3);

        horizontalLayout_6->addWidget(pushButton_2);


        verticalLayout_8->addWidget(frame_10);

        verticalLayout_8->setStretch(0, 3);
        verticalLayout_8->setStretch(1, 1);

        verticalLayout_7->addWidget(frame_9);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 8);
        stackedWidget->addWidget(addData);
        deleteData = new QWidget();
        deleteData->setObjectName("deleteData");
        verticalLayout_10 = new QVBoxLayout(deleteData);
        verticalLayout_10->setObjectName("verticalLayout_10");
        frame_12 = new QFrame(deleteData);
        frame_12->setObjectName("frame_12");
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_12);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_4 = new QLabel(frame_12);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 225, 2);\n"
"color: rgb(0, 0, 127);"));

        horizontalLayout_7->addWidget(label_4);


        verticalLayout_10->addWidget(frame_12);

        frame_13 = new QFrame(deleteData);
        frame_13->setObjectName("frame_13");
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_13);
        verticalLayout_11->setObjectName("verticalLayout_11");
        deleteRecodeId = new QLineEdit(frame_13);
        deleteRecodeId->setObjectName("deleteRecodeId");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Rockwell")});
        font4.setPointSize(24);
        deleteRecodeId->setFont(font4);
        deleteRecodeId->setStyleSheet(QString::fromUtf8("color: rgb(255, 218, 11);\n"
"background-color: rgba(0, 0, 127, 120);"));

        verticalLayout_11->addWidget(deleteRecodeId);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        frame_14 = new QFrame(frame_13);
        frame_14->setObjectName("frame_14");
        frame_14->setFrameShape(QFrame::Shape::StyledPanel);
        frame_14->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_14);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        enterForDelete = new QPushButton(frame_14);
        enterForDelete->setObjectName("enterForDelete");
        sizePolicy.setHeightForWidth(enterForDelete->sizePolicy().hasHeightForWidth());
        enterForDelete->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Rockwell")});
        font5.setPointSize(26);
        font5.setBold(true);
        enterForDelete->setFont(font5);
        enterForDelete->setStyleSheet(QString::fromUtf8("color: rgb(255, 238, 0);"));

        horizontalLayout_8->addWidget(enterForDelete);

        cl = new QPushButton(frame_14);
        cl->setObjectName("cl");
        sizePolicy.setHeightForWidth(cl->sizePolicy().hasHeightForWidth());
        cl->setSizePolicy(sizePolicy);
        cl->setFont(font5);
        cl->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(cl);


        verticalLayout_11->addWidget(frame_14);

        verticalLayout_11->setStretch(0, 3);
        verticalLayout_11->setStretch(1, 2);
        verticalLayout_11->setStretch(2, 2);

        verticalLayout_10->addWidget(frame_13);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(1, 8);
        stackedWidget->addWidget(deleteData);

        verticalLayout_4->addWidget(stackedWidget);


        verticalLayout->addWidget(frame_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 3);

        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        showBtn = new QPushButton(frame_2);
        showBtn->setObjectName("showBtn");
        sizePolicy.setHeightForWidth(showBtn->sizePolicy().hasHeightForWidth());
        showBtn->setSizePolicy(sizePolicy);
        showBtn->setFont(font5);
        showBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 238, 0);\n"
"background-color: rgb(0, 0, 63);"));

        verticalLayout_3->addWidget(showBtn);

        addBtn = new QPushButton(frame_2);
        addBtn->setObjectName("addBtn");
        sizePolicy.setHeightForWidth(addBtn->sizePolicy().hasHeightForWidth());
        addBtn->setSizePolicy(sizePolicy);
        addBtn->setFont(font5);
        addBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 238, 0);\n"
"background-color: rgb(0, 0, 63);"));

        verticalLayout_3->addWidget(addBtn);

        deleteBtn = new QPushButton(frame_2);
        deleteBtn->setObjectName("deleteBtn");
        sizePolicy.setHeightForWidth(deleteBtn->sizePolicy().hasHeightForWidth());
        deleteBtn->setSizePolicy(sizePolicy);
        deleteBtn->setFont(font5);
        deleteBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 238, 0);\n"
"background-color: rgb(0, 0, 63);"));

        verticalLayout_3->addWidget(deleteBtn);


        horizontalLayout->addWidget(frame_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);
        app->setCentralWidget(centralwidget);

        retranslateUi(app);
        QObject::connect(pushButton_2, &QPushButton::clicked, addDatatextBox, qOverload<>(&QPlainTextEdit::clear));
        QObject::connect(pushButton_2, &QPushButton::clicked, addTitle, qOverload<>(&QLineEdit::clear));
        QObject::connect(cl, &QPushButton::clicked, deleteRecodeId, qOverload<>(&QLineEdit::clear));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(app);
    } // setupUi

    void retranslateUi(QMainWindow *app)
    {
        app->setWindowTitle(QCoreApplication::translate("app", "app", nullptr));
        label->setText(QCoreApplication::translate("app", "<html><head/><body><p align=\"center\">BASIC</p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("app", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">RECODES</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("app", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700; font-style:italic;\">RECODES</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("app", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700; font-style:italic;\">ADD DATA</span></p></body></html>", nullptr));
        addTitle->setPlaceholderText(QCoreApplication::translate("app", "record title", nullptr));
        addDatatextBox->setPlaceholderText(QCoreApplication::translate("app", "other data", nullptr));
        addDataBtn->setText(QCoreApplication::translate("app", "ENTER", nullptr));
        pushButton_2->setText(QCoreApplication::translate("app", "CLEAR", nullptr));
        label_4->setText(QCoreApplication::translate("app", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700; font-style:italic;\">DELETE DATA</span></p></body></html>", nullptr));
        deleteRecodeId->setPlaceholderText(QCoreApplication::translate("app", "record id", nullptr));
        enterForDelete->setText(QCoreApplication::translate("app", "ENTER", nullptr));
        cl->setText(QCoreApplication::translate("app", "CLEAR", nullptr));
        showBtn->setText(QCoreApplication::translate("app", "SHOW DATA", nullptr));
        addBtn->setText(QCoreApplication::translate("app", "ADD DATA", nullptr));
        deleteBtn->setText(QCoreApplication::translate("app", "DELETE DATA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class app: public Ui_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APP_H

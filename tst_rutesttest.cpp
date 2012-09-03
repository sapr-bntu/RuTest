#include <QtGui>
#include <QtCore/QString>
#include <QtTest/QtTest>
#include <QtCore/QCoreApplication>
#include "../textedit.h"

class RuTestTest : public QObject
{
    Q_OBJECT

public:
    RuTestTest();

private Q_SLOTS:
    void testCase1();
    void testCase2();
    void testCase3();
    void testCase4();
    void testCase5();

};

RuTestTest::RuTestTest()
{
}


void RuTestTest::testCase1()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "work");
    QCOMPARE(lineEdit.text(), QString("work"));
}
void RuTestTest::testCase2()
{
    TextEdit txt;
    QString result =txt.textSize("12");
    bool success;
    if (result=="12")
        success=true;
    else success=false;
    QCOMPARE(true,success);
}
void RuTestTest::testCase3()
{
    TextEdit txt;
    bool p;
    p=txt.textBold();
    QCOMPARE(true,p);
}
void RuTestTest::testCase4()
{
    bool success;
    TextEdit txt;
    QString str="Super";
    success=txt.ForSaveWord(str);
    QCOMPARE(success,true);
}
void RuTestTest::testCase5()
{
    TextEdit txt;
    bool p;
    p=txt.textItalic();
    QCOMPARE(true,p);
}

QTEST_APPLESS_MAIN(RuTestTest);

#include "tst_rutesttest.moc"

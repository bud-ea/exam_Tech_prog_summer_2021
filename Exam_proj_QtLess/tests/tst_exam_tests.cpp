#include <QtTest>
#include <math.h>
#include "../app/circle.h"

// add necessary includes here

class exam_tests : public QObject
{
    Q_OBJECT

public:
    exam_tests();
    ~exam_tests();

private slots:
    void radiusOk();
    void differentCoordNoMatter();

};

exam_tests::exam_tests()
{

}

exam_tests::~exam_tests()
{

}

void exam_tests::radiusOk()
{
    qDebug("Running radius test");
    circle c1(0, 0, 1);
    circle c2(2, 10, 2);
    circle c3(11, 53, 3);
    circle c4(32, 32, 4);
    circle c5(32, 32, 3.14);
    circle c6(32, 32, 1.337);
    circle c7(32, 32, 44);
    circle c8(32, 32, 231);
    circle c9(32, 32, 0.002);
    circle c10(32, 32, 0xDEADBEEF);

    qDebug("Checking for r = 1");
    QVERIFY2(c1.getSurface() == M_PI * pow(1, 2), "Counted radius does not match pre-defined constant");

    qDebug("Checking for r = 2");
    QVERIFY2(c2.getSurface() == M_PI * pow(2, 2), "Counted radius does not match pre-defined constant");

    qDebug("Checking for r = 3");
    QVERIFY2(c3.getSurface() == M_PI * pow(3, 2), "Counted radius does not match pre-defined constant");

    qDebug("Checking for r = 4");
    QVERIFY2(c4.getSurface() == M_PI * pow(4, 2), "Counted radius does not match pre-defined constant");

    qDebug("Checking for r = 3.14");
    QVERIFY2(c5.getSurface() == M_PI * pow(3.14, 2), "Counted radius does not match pre-defined constant");

    qDebug("Checking for r = 1.337");
    QVERIFY2(c6.getSurface() == M_PI * pow(1.337, 2), "Counted radius does not match pre-defined constant");

    qDebug("Checking for r = 44");
    QVERIFY2(c7.getSurface() == M_PI * pow(44, 2), "Counted radius does not match pre-defined constant");

    qDebug("Checking for r = 231");
    QVERIFY2(c8.getSurface() == M_PI * pow(231, 2), "Counted radius does not match pre-defined constant");

    qDebug("Checking for r = 0.002");
    QVERIFY2(c9.getSurface() == M_PI * pow(0.002, 2), "Counted radius does not match pre-defined constant");

    qDebug("Checking for r = 0xDEADBEEF");
    QVERIFY2(c10.getSurface() == M_PI * pow(0xDEADBEEF, 2), "Counted radius does not match pre-defined constant");
}

void exam_tests::differentCoordNoMatter()
{
    qDebug("Checking that radius being calculated independently of coordinates");
    circle c1(11, 50, 5);
    circle c2(12, 15, 5);

    QVERIFY2(c1.getSurface() == c2.getSurface(), "Radiuses didn't match with different coordinates");
}

QTEST_APPLESS_MAIN(exam_tests)

#include "tst_exam_tests.moc"

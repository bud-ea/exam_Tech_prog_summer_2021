#include <QtTest>
#include <iostream>
#include "D:\201-351_Zvyagin\exam_Tech_prog_summer_2021\Exam_proj_QtLess\triangle.h"
using namespace std;
// add necessary includes here

class test_area_calc : public QObject
{
    Q_OBJECT

public:
    test_area_calc();
    ~test_area_calc();

private slots:
    void test_case3();
    void test_case2();
    void test_case1();

};

test_area_calc::test_area_calc()
{

}

test_area_calc::~test_area_calc()
{

}

void test_area_calc::test_case1()
{
    string str = "";
    triangle a(1, 1, 5, 1, 5, 4);
    double res = a.area_calc();
    if (res == 6)
        str = "true";
    QVERIFY2(str == "true", "checkText true");
}

void test_area_calc::test_case2()
{
    string str = "";
    triangle a(0, 0, 0, 0, 0, 0);
    double res = a.area_calc();
    if (res == 0)
        str = "true";
    QVERIFY2(str == "true", "checkText true");
}

void test_area_calc::test_case3()
{
    string str = "";
    triangle a(1, 1, 7, 1, 7, 4);
    double res = a.area_calc();
    if (res == 9)
        str = "true";
    QVERIFY2(str == "true", "checkText true");
}
QTEST_APPLESS_MAIN(test_area_calc)

#include "tst_test_area_calc.moc"

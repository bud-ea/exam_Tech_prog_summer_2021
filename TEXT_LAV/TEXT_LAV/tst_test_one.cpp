#include <QtTest>
#include"D:\EXAM\triangle.h"

// add necessary includes here

class Test_one : public QObject
{
    Q_OBJECT

public:
    Test_one();
    ~Test_one();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();

};

Test_one::Test_one()
{

}

Test_one::~Test_one()
{

}

void Test_one::test_case1()
{
    double tre[6]={1,2,3,4,5,6};
    triangle n = triangle(tre);
    QVERIFY2(n.Perimeter()==10,"perimetr corrected");
}

void Test_one::test_case2()
{
    double tre[6]={1,2,3,4,5,6};
    triangle n = triangle(tre);
QVERIFY2(n.Perimeter()==5,"perimetr corrected");
}
void Test_one::test_case3()
{
    double tre[6]={1,2,3,4,5,6};
    triangle n = triangle(tre);
    QVERIFY2(n.Perimeter()==46,"perimetr corrected");
}
QTEST_APPLESS_MAIN(Test_one)

#include "tst_test_one.moc"

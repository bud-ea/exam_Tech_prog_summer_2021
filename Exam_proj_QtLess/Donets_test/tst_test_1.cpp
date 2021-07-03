#include <QtTest>
#include "triangle.h"

// add necessary includes here

class test1 : public QObject
{
Q_OBJECT

public:
test1();
~test1();

private slots:
void test_case1();
void test_case2();
void test_case3();
};

test1::test1()
{

}

test1::~test1()
{

}

void test1::test_case1()
{
double tre[6]={1,2,3,4,5,6};
triangle n = triangle(tre);
QVERIFY2(n.perimetr()==10,"perimetr corrected");
}

void test1::test_case2()
{
double tre[6]={1,2,3,4,5,6};
triangle n = triangle(tre);
QVERIFY2(n.perimetr()==5,"perimetr corrected");
}
void test1::test_case3()
{
double tre[6]={1,2,3,4,5,6};
triangle n = triangle(tre);
QVERIFY2(n.perimetr()==46,"perimetr corrected");
}
QTEST_APPLESS_MAIN(test1)

#include "tst_test1.moc"


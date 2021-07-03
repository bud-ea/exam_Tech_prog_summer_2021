#include <QtTest>
#include "square.h"


// add necessary includes here

class Test : public QObject
{
    Q_OBJECT

public:
    Test();
    ~Test();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();

};

Test::Test()
{

}

Test::~Test()
{

}

void Test::test_case1()
{
    double qwe[8]={1,1,0,1,1,0,0,0};
    square p = square(qwe);
    QVERIFY(p.per_square()==4);
}

void Test::test_case2()
{
    double ewq[8]={2,2,0,2,2,0,0,0};
    square e = square(ewq);
    if(e.per_square()==8)
    {
        QFAIL("Right but wrong");
    }
}

void Test::test_case3()
{
    double wqe[8]={3,3,0,3,3,0,0,0};
    square q = square(wqe);
    QVERIFY(q.per_square()==12);
}

QTEST_APPLESS_MAIN(Test)

#include "tst_test.moc"

#include <QtTest>
#include "square.h"

// add necessary includes here

class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();

};

test::test()
{

}

test::~test()
{

}

void test::test_case1()
{
    double qwe[8]={1,1,0,1,1,0,0,0};
    square p = square(qwe);
    QVERIFY(p.p_square()==4);
}
void test::test_case2()
{
    double qwe1[8]={2,0,0,2,2,0,0,2};
    square e = square(qwe1);
    if(e.p_square()==8)
    {
        QFAIL("Right but wrong");
    }
}
void test::test_case3()
{
    double qwe2[8]={3,3,0,3,3,0,0,0};
    square q = square(qwe2);
    QVERIFY(q.p_square()==12);
}

QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"

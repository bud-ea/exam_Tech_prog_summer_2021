#include <QtTest>
#include "square.h"

// add necessary includes here

class test_square : public QObject
{
    Q_OBJECT

public:
    test_square();
    ~test_square();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();

};

test_square::test_square()
{

}

test_square::~test_square()
{

}

void test_square::test_case1()
{
    double qwe[8]={0,0,1,0,1,1,0,1};
    square p = square(qwe);
    QVERIFY(p.figure_square()==true);
}

void test_square::test_case2()
{
    double ewq[8]={0,0,1,1,2,2,3,3};
    square e = square(ewq);
    QVERIFY(e.figure_square()==true); //fail
}
void test_square::test_case3()
{
    double wqe[8]={0,0,2,0,2,2,0,2};
    square q = square(wqe);
    QVERIFY(q.figure_square()==true);
}


QTEST_APPLESS_MAIN(test_square)

#include "tst_test_square.moc"

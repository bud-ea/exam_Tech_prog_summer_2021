#include <QtTest>
#include "../Exam_proj_QtLess/square.cpp"

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
    double qwe[8]={0,0,1,0,1,1,0,1};
    square p = square(qwe);
    QVERIFY(p.figure_square()==true);
}

void Test::test_case2()
{
    double ewq[8]={0,0,1,1,2,2,3,3};
    square e = square(ewq);
    if(e.figure_square()==false) QFAIL("warning");


}
void Test::test_case3()
{
    double wqe[8]={0,0,2,0,2,2,0,2};
    square q = square(wqe);

    QVERIFY(q.figure_square()==true);
}

QTEST_APPLESS_MAIN(Test)

#include "tst_test.moc"

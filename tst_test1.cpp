#include <QtTest>
#include "..\square.cpp"
// add necessary includes here

class test1 : public QObject
{
    Q_OBJECT

public:
    test1();
    ~test1();

private slots:
    void test_case1();

};

test1::test1()
{

}

void test1::test_case1()
{
   double ver1[8]={0,0,5,0,0,5,5,5};
   square q (ver1);
   QVERIFY2(q.square_p(ver1) ,"error");
   double ver2[8]={0,0,5,5,-5,5,0,10};
   square q2 (ver2);
   QVERIFY2(q2.square_p(ver2) ,"error");
   double ver3[8]={0,0,2,0,0,2,2,2};
   square q3 (ver3);
   QVERIFY2(q3.square_p(ver3) ,"error");
}

QTEST_APPLESS_MAIN(test1)

#include "tst_test1.moc"

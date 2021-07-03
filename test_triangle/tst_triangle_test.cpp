#include <QtTest>
#include "D:\exam_Tech_prog_summer_2021\Exam_proj_QtLess\triangle.cpp"

// add necessary includes here

class triangle_test : public QObject
{
    Q_OBJECT

public:
    triangle_test();
    ~triangle_test();

private slots:
    void test_case1();
private:
    triangle test;

};

triangle_test::triangle_test()
{

}

triangle_test::~triangle_test()
{

}

void triangle_test::test_case1() /// функция тестируют класс
{
    double a_x, a_y, b_x, b_y, c_x, c_y; /// тестируемые значения
     a_x = 12;
     a_y = 11;
     b_x = 3;
     b_y = 1;
     c_x = 11;
     c_y = 12;

     double a, b , c;

     a = 12;
     b = 11;
     c = 3;

     double d, f, g; /// тестируемые значения
     d = 14;
     f = 15;
     g = 17;

     double m, n, k; /// тестируемые значения

    m = 3;
    n = 2;
    k = 1;

 QVERIFY(test.triangleper(4, 10, 6) == 20); /// при работе этого теста функция вернёт 0
 // QVERIFY(test.triangleper(4, 10, 6) == 20); /// вернёт 1
 QVERIFY(test.triangleper(a,b,c) == 26 ); /// при работе этого теста функция 0
 QVERIFY(test.triangleper(d,g,f) == 46 ); /// при работе этого теста функцият 0
 QVERIFY(test.triangleper(m,n,k) == 6 ); /// при работе этого теста функция 0
}

QTEST_APPLESS_MAIN(triangle_test)

#include "tst_triangle_test.moc"

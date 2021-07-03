#include <QtTest>
#include "C:/Users/Лиза/exam_Tech_prog_summer_2021/Exam_proj_QtLess/circle.h"

class Exam_proj_QtLess_Tests : public QObject
{
    Q_OBJECT

public:
    Exam_proj_QtLess_Tests();
    ~Exam_proj_QtLess_Tests();

private slots:
    void test_case1();
    void test_circle_get_P_data();
    void test_circle_get_P();
};

Exam_proj_QtLess_Tests::Exam_proj_QtLess_Tests()
{

}

Exam_proj_QtLess_Tests::~Exam_proj_QtLess_Tests()
{

}

void Exam_proj_QtLess_Tests::test_case1()
{

}

void Exam_proj_QtLess_Tests::test_circle_get_P_data(){
    QTest::addColumn<double>("x");
    QTest::addColumn<double>("y");
    QTest::addColumn<double>("rad");
    QTest::addColumn<double>("res");

    QTest::newRow("0x0x5->31.41592653589793")<<0<<0<<5<<31.41592653589793;
	QTest::newRow("5x6x10->62.83185307179586")<<0<<0<<5<<62.83185307179586;
	QTest::newRow("1x3x12->75.39822368615503")<<0<<0<<5<<75.39822368615503;

}

void Exam_proj_QtLess_Tests::test_circle_get_P(){
    QFETCH(double, x);
    QFETCH(double, y);
    QFETCH(double, rad);
    QFETCH(double, res);

    circle a(x, y, rad);

    //assert
    QCOMPARE(a.get_P(), res);
}



QTEST_APPLESS_MAIN(Exam_proj_QtLess_Tests)

#include "tst_exam_proj_qtless_tests.moc"

#include <QtTest>
#include "D:\exam\exam_Tech_prog_summer_2021\Exam_proj_QtLess\square.h"
// add necessary includes here

class exam_test : public QObject
{
    Q_OBJECT

public:
    exam_test();
    ~exam_test();

private slots:
    void test_case1();
    void test_check_square_00011110_true();
    void test_check_square_00000000_false();
    void test_check_square_01231234_false();

};

exam_test::exam_test()
{

}

exam_test::~exam_test()
{

}

void exam_test::test_case1()
{

}

void exam_test::test_check_square_00011110_true()
{
    double arr[8] = {0,0,0,1,1,1,1,0};

    square sq(arr);

    bool res = sq.check_square();

    QVERIFY2(res == true, "ERROR");
}

void exam_test::test_check_square_00000000_false()
{
    double arr[8] = {0,0,0,0,0,0,0,0};

    square sq(arr);

    bool res = sq.check_square();
    std::cout << "res " << res;
    QVERIFY2(res == false, "ERROR");
}

void exam_test::test_check_square_01231234_false()
{
    double arr[8] = {0,1,2,3,1,2,3,4};

    square sq(arr);

    bool res = sq.check_square();
    std::cout << "res " << res;
    QVERIFY2(res == false, "ERROR");
}


QTEST_APPLESS_MAIN(exam_test)

#include "tst_exam_test.moc"
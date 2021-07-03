#include <QtTest>

// add necessary includes here

class TestExam_proj_QtLess : public QObject
{
    Q_OBJECT

public:
    TestExam_proj_QtLess();
    ~TestExam_proj_QtLess();

private slots:
    void test_case1();

};

TestExam_proj_QtLess::TestExam_proj_QtLess()
{

}

TestExam_proj_QtLess::~TestExam_proj_QtLess()
{

}

void TestExam_proj_QtLess::test_case1()
{

}
void TestExam_proj_QtLess::test_data()
{
    double  answer = 12.837;
    int par[6] = {3,5,6,7,8,9};
    test_triangle_perimetr(answer, par);

    answer = 14;
    par[0] = 7;
    par[1] = 9;
    par[2] = 3;
    par[3] = 4;
    par[4] = 10;
    par[5] = 11;
    test_triangle_perimetr(answer, par);
}
void TestExam_proj_QtLess::test_triangle_perimetr(double answer, int* par)
{

    triangle tri;
    QVERIFY(answer == tri.perimetr(par[0], par[1], par[2], par[3], par[4], par[5])/1000);
}

QTEST_APPLESS_MAIN(TestExam_proj_QtLess)

QTEST_APPLESS_MAIN(TestExam_proj_QtLess)

#include "tst_testexam_proj_qtless.moc"

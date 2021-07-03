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

QTEST_APPLESS_MAIN(TestExam_proj_QtLess)

#include "tst_testexam_proj_qtless.moc"

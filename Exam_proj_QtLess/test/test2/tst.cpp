#include <QtTest>
#include "C:/git/exam_Tech_prog_summer_2021/Exam_proj_QtLess/test/test2/functions.h"

// add necessary includes here

class test_1 : public QObject
{
    Q_OBJECT

public:
    test_1();
    ~test_1();

private slots:
    void message_to_server_yes1();
};

test_1::test_1()
{

}

test_1::~test_1()
{

}

void test_1::message_to_server_yes1()
{
    int rad = 5;
    double result = S(rad);
    QVERIFY( result);
}


QTEST_APPLESS_MAIN(test_1)

#include "tst_test_3.moc"

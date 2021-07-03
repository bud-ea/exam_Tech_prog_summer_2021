#include <QtTest>
#include "..."

// add necessary includes here

class Area_Square_Tests : public QObject
{
    Q_OBJECT

public:
    Area_Square_Tests();
    ~Area_Square_Tests();

private slots:
    void test_case1();

};

Area_Square_Tests::Area_Square_Tests()
{

}

Area_Square_Tests::~Area_Square_Tests()
{

}

void Area_Square_Tests::test_case1()
{

}

QTEST_APPLESS_MAIN(Area_Square_Tests)

#include "tst_area_square_tests.moc"

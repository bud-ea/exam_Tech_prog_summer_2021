#include <QtTest/QtTest>
#include <iostream>

#include "E:\Exam\exam_Tech_prog_summer_2021\Exam_proj_QtLess\triangle.h"

class UnitTest : public QObject
{
    Q_OBJECT

private slots:
    void test_case1();
};


/*!
 * \brief UnitTest::test_case1 Unit Test для проверки метода вычисления площади треугольника
 */

void UnitTest::test_case1()
{
    double mas[6] = {2.0,3.0,5.0,8.0,8.0,3.0};
    triangle* tri = new triangle(mas);
    double result = tri->perimeter();
    std::cout << "Вывод: " << result;
    QVERIFY(result == 15.0);
}

QTEST_MAIN(UnitTest)
#include "tst_unittest.moc"

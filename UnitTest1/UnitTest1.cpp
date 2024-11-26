#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
    TEST_CLASS(UnitTests)
    {
    public:

        TEST_METHOD(TestCalculateYNegative)
        {
            double x = -5.0;
            double n = 5.0;

            double result = calculateYNegative(x, n);

            double expected = 36.0;
            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(TestCalculateYPositive)
        {
            double x = 2.0;
            double n = 3.0;

            double result = calculateYPositive(x, n);

            double expected = 17.0;

            Assert::AreEqual(expected, result);
        }


        TEST_METHOD(TestProcessValues)
        {

            double a = -2.0, b = 2.0, h = 1.0, n = 3.0;

        }
    };
}

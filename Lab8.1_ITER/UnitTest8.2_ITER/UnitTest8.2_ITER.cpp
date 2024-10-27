#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1_ITER/Lab8.1_ITER.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82ITER
{
    TEST_CLASS(UnitTest82ITER)
    {
    public:

        TEST_METHOD(TestReplaceCommasWithStars)
        {
            char str1[] = "a,b,c";
            char expected1[] = "a**b**c";
            char* result1 = ReplaceCommasWithStars(str1);
            Assert::AreEqual(strcmp(result1, expected1), 0);
            delete[] result1;
        }
    };
}

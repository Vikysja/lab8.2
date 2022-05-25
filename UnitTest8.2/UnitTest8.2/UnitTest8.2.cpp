#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            string str = "andriy";
            string expected = "andriy";
            Assert::AreEqual(expected, findWord(str, 'a'));
        };
        TEST_METHOD(Test2)
        {
            string str = "one";
            string expected = "";
            Assert::AreEqual(expected, findWord(str, 'a'));
        };
        TEST_METHOD(Test3)
        {
            string str = "nan in";
            string expected = "";
            Assert::AreEqual(expected, findWord(str, 'a'));
        };
        TEST_METHOD(Test4)
        {
            string str = "nan and null";
            string expected = "and";
            Assert::AreEqual(expected, findWord(str, 'a'));
        };
        TEST_METHOD(Test5)
        {
            string str = "nan and null, another";
            string expected = "another";
            Assert::AreEqual(expected, findWord(str, 'a'));
        };
        TEST_METHOD(Test6)
        {
            string str = "";
            string expected = "";
            Assert::AreEqual(expected, findWord(str, 'a'));
        };
        TEST_METHOD(Test7)
        {
            string str = " ";
            string expected = "";
            Assert::AreEqual(expected, findWord(str, 'a'));
        };
        TEST_METHOD(Test8)
        {
            string str = "date time";
            string expected = "";
            Assert::AreEqual(expected, findWord(str, 'a'));
        };
        TEST_METHOD(Test9)
        {
            string str = " andriy and bob";
            string expected = "and";
            Assert::AreEqual(expected, findWord(str, 'a'));
        };
        TEST_METHOD(Test10)
        {
            string str = " \n and \' 2 43 \t andriy bob";
            string expected = "andriy";
            Assert::AreEqual(expected, findWord(str, 'a'));
		}
	};
}

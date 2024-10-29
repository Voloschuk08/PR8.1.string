#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.1.4/PR8.1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest814
{
	TEST_CLASS(UnitTest814)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string testStr = "hello no world";
			string expectedStr = "hello *** world";

			Assert::AreEqual(expectedStr, ReplaceNo(testStr), L"'no' should be replaced by '***'");
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.1(3)/laba8.1(3).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* str = "fff";
			Count(str);
			int expected = 2, actual;
			Assert::AreEqual(expected, actual);
		}
	};
}

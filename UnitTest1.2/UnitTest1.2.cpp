#include "pch.h"
#include "CppUnitTest.h"
#include "Time.h"
#include "Z:/university/ооп/програми/1.2/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time l;
			int hours, minutes, seconds;
			l.Init(6, 5, 4);
			int test = l.Init(6, 5, 4);
			Assert::AreEqual(test, 1);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.4/Lab 6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4iter
{
	TEST_CLASS(UnitTest4iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a[8] = { -5,6, -3, 1,5,4,9,2 };
			double c = SumPlus(a, 8);
			double d = Dobutok(a, 8);
			
			
			Assert::AreEqual(c, 27*1.);
			Assert::AreEqual(d, 20 * 1.);
		
		}
	};
}

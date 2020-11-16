#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3(rec)/Lab 6.3(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3rec
{
	TEST_CLASS(UnitTest3rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[10] = { 0,8,4,-1,2,-3,4,-4,9,-2 };
			int b = SumMinus(a, 10,0,0);
			Assert::AreEqual(b, -10);
		}
	};
}

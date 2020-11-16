#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3/Lab 6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3iter
{
	TEST_CLASS(UnitTest3iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[10] = {0,8,4,-1,2,-3,4,-4,9,-2};
			int b = SumMinus(a, 10);
			Assert::AreEqual(b, -10);
		}
	};
}

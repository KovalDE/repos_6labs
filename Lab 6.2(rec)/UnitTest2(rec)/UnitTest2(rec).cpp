#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2(rec)/Lab 6.2(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2rec
{
	TEST_CLASS(UnitTest2rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[8] = { 9,4,0,-3,-2,6,7,8 };
			int b = SumPar(a, 8,0,0);
			Assert::AreEqual(b, 16);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1(rec)/Lab 6.1(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1rec
{
	TEST_CLASS(UnitTest1rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[10] = { 7, 3, -2, 1, 4, 0, 8, -4, 5, 6 };
			int c = Sum(a, 10,0,0);
			int d = Count(a, 10,0,0);

			Assert::AreEqual(c, 18);

			Assert::AreEqual(d, 4);
		}
	};
}

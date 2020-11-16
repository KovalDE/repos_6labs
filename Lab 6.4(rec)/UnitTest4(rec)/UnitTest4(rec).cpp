#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.4(rec)/Lab 6.4(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4rec
{
	TEST_CLASS(UnitTest4rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a[8] = { -5,6, -3, 1,5,4,9,2 };
			Assert::AreEqual( Mini(a, 8, 0, -1, a[0]), 3);
			Assert::AreEqual( Maxi(a, 8, 0, -1, a[0]), 6);
		}
	};
}

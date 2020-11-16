#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2/Lab 6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2iter
{
	TEST_CLASS(UnitTest2iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[8] = {9,4,0,-3,-2,6,7,8};
			int b = SumPar(a,8);
			Assert::AreEqual(b,16);
		}
	};
}

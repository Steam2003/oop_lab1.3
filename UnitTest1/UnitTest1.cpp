#include "pch.h"
#include "CppUnitTest.h"
#include "../Point.cpp"
#include "../Point.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point a;
			a.SetX(2);
			int test = a.GetX();
			Assert::AreEqual(test,2);
		}
	};
}

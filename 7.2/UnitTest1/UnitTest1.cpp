#include "pch.h"
#include "CppUnitTest.h"
#include "/Users/Olga/source/repos/7.2/7.2/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int** a = new int* [2];
			a[0] = new int[2]{ 0, 0 };
			a[1] = new int[2]{ 0, 1 };
			int S;
			int k;
			Min(a, 2, S, k);
			Assert::AreEqual(0, S);
		}

	};
}

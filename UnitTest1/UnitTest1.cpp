#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB6_2it/LAB6_2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(AverageIndexOfEvenElements_EmptyArray) {
			int* a = nullptr; 
			int n = 0;

			double result = averageIndexOfEvenElements(a, n);
			Assert::AreEqual(result, 0.0);
		}

		TEST_METHOD(AverageIndexOfEvenElements_NoEvenElements) {
			int a[] = { 1, 3, 5 };
			int n = sizeof(a) / sizeof(a[0]);

			double result = averageIndexOfEvenElements(a, n);
			Assert::AreEqual(result, 0.0);
		}

		TEST_METHOD(AverageIndexOfEvenElements_EvenElements) {
			int a[] = { 2, 4, 6 };
			int n = sizeof(a) / sizeof(a[0]);

			double result = averageIndexOfEvenElements(a, n);
			Assert::AreEqual(result, 1.0);
		}

		TEST_METHOD(AverageIndexOfEvenElements_MixedElements) {
			int a[] = { 1, 2, 3, 4, 5 };
			int n = sizeof(a) / sizeof(a[0]);

			double result = averageIndexOfEvenElements(a, n);
			Assert::AreEqual(result, 2.0);
		}
	};
}

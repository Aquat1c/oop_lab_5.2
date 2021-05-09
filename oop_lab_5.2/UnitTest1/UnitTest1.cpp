#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_lab_5.2/oop_lab_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestDisc)
		{
			Assert::AreEqual(1., disc(1, 3, 2), 0.1);
		}
	};
}

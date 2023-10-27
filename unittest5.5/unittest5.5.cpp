#include "pch.h"
#include "CppUnitTest.h"
#include "../555/555.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittest55
{
	TEST_CLASS(unittest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = bn(2, 4, 3);
			Assert::AreEqual(t, 32, 0.000001);

		}
	};
}

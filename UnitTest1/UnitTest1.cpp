#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.3/Vector2D.h"
#include "../lab1.3/Vector2D.cpp"
#include <string>
#include <sstream>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		
			Vector2D g,f,e;
			g.Init(4,2);
			f.Init(1,3);
			bool t;
			t = e.Poriv(g, f);
			Assert::AreEqual(t,true);
		}
	};
}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass(int i = 0)
//	{
//		cout << 1;
//	}
//	MyClass(const MyClass& x)
//	{
//		cout << 2;
//	}
//	MyClass& operator=(const MyClass& x)
//	{
//		cout << 3;
//		return *this;
//	}
//
//	~MyClass()
//	{
//		cout << 4;
//	}
//};
//void Test1()
//{
//	MyClass obj1(1),obj2(2), obj3(obj1);
//}
//
//void func(const char** m)
//{
//	++m;
//	cout << *m << endl;
//}
//void Test2()
//{
//	const static char* a[] = { "morning","afternoon","evening" };
//	const char** p;
//	p = a;
//	func(p);
//}
//void Test3()
//{
//	int a = 21;
//	a ^= (1 << 5) - 1;
//	cout << a << endl;
//}
//int main()
//{
////	Test1();
//
////	Test2();
//
//	Test3();
//	return 0;
//}
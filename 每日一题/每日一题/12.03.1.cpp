//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int Test1(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x & (x - 1);
//	}
//	return count;
//}
//void Test2()
//{
//	int i = 1;
//	if (i <= 0)
//	{
//		printf("****\n");
//	}
//	else
//	{
//		printf("%%%%\n");
//	}
//}
//struct A
//{
//	void foo()
//	{
//		printf("foo");
//	}
//	virtual void bar()
//	{
//		printf("bar");
//	}
//	A()
//	{
//		bar();
//	}
//};
//struct B:A
//{
//	void foo()
//	{
//		printf("b_foo");
//	}
//	void bar()
//	{
//		printf("b_bar");
//	}
//};
//void Test3()
//{
//	A* p = new B;
//	p->foo();
//	p->bar();
//}
//
//int Test4(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//	{
//		return 2 * Test4(n + 1);
//	}
//}
//
//class P
//{
//public:
//	P(string name)
//	{
//		cout << name;
//	}
//};
//class C
//{
//public :
//	C()
//		:b("b")
//		,a("a")
//	{
//
//	}
//
//	P a;
//	P b;
//};
//void Test5()
//{
//	C c;
//}
//
//template<class T>
//class Foo
//{
//	T tVal;
//public:Foo(T t) :tVal(t)
//{
//
//}
//};
//template<class T>
//class FooDer:public Foo<T>
//{
//	FooDer(T t)
//	{
//
//	}
//};
//
//void Test6()
//{
////	FooDer<int> d(5);
//}
//int main()
//{
////	cout << Test1(9999) << endl;
//
////	Test2();
//
////	Test3();
//
////	cout << Test4(2);
//
////	Test5();
//	return 0;
//}
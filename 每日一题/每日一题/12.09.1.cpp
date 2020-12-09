//#include <iostream>
//#include <string>
//using namespace std;
//
//void Test1()
//{
//	char a[] = "ABCDEF";
//	char b[] = { 'A','B','C','D','E','F' };
//	cout << sizeof(a) << " " << sizeof(b);
//
//}
//
//class A
//{
//public:
//	A()
//	{
//		printf("A ");
//	}
//
//	~A()
//	{
//		printf("deA ");
//	}
//};
//class B
//{
//public:
//	B()
//	{
//		printf("B ");
//	}
//	~B()
//	{
//		printf("deB ");
//	}
//};
//class C :public A, public B
//{
//public:
//	C()
//	{
//		printf("C ");
//	}
//	~C()
//	{
//		printf("deC ");
//	}
//};
//void Test2()
//{
//	A* a = new C();
//	delete a;
//}
//
//class D
//{
//public:
//	void foo()
//	{
//		delete this;
//	}
//};
//void Test3()
//{
//	D* d = new D();
//	d->foo();
//}
//
//class E
//{
//public:
//	void f()
//	{
//		printf("A\n");
//	}
//};
//class F:public E
//{
//public:
//	virtual void f()
//	{
//		printf("B\n");
//	}
//};
//void Test4()
//{
//	E* a = new F;
//	a->f();
//	delete a;
//}
//static int a = 1;
//void fun1()
//{
//	a = 2;
//}
//void fun2()
//{
//	int a = 3;
//}
//void fun3()
//{
//	static int a = 4;
//}
//void Test5()
//{
//	printf("%d ", a);
//	fun1();
//	printf("%d ", a);
//	fun2();
//	printf("%d ", a);
//	fun3();
//	printf("%d ", a);
//}
//int main()
//{
////	Test1();
//
////	Test2();
//
////	Test3();
//
////	Test4();
//
//	Test5();
//	return 0;
//}
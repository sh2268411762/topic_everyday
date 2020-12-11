//#include <iostream>
//using namespace std;
//
//
//class A
//{
//public:
//	A()
//	{
//		p();
//	}
//	virtual void p() { printf("A"); }
//	virtual ~A()
//	{
//		p();
//	}
//};
//class B :public A
//{
//public:
//	B() { p(); }
//	void p()
//	{
//		printf("B");
//	}
//	~B()
//	{
//		p();
//	}
//};
//
//void Test1()
//{
//	A* a = new B();
//	delete a;
//}
//
//template <class T>
//struct sum {
//	static void foo(T op1, T op2)
//	{
//		cout << op1 << op2;
//	}
//};
//
//int main()
//{
////	Test1();
//
//	//sum<int>::foo(1, 3);
//
//	//long long a = 1, b = 2, c = 3;
//	//printf("%d %d %d ", a, b, c);
//
//	//int a[] = { 1,2,3,4,5 };
//	//int* p[] = { a,a + 1,a + 2,a + 3 };
//	//int** q = p;
//	//cout << *(p[0] + 1) + **(q + 2);
//
//	return 0;
//}
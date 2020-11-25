//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//class A
//{
//public:
//	A()
//		:a(10)
//	{
//		cout << "构造" << endl;
//	}
//
//	A(const A& a)
//	{
//		cout << "拷贝构造" << endl;
//	}
//private:
//	int a;
//};
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0) return 1;
//	else if (n == 1) return 2;
//	else return fib(n - 1) + fib(n - 2);
//}
//void Test1()
//{
//	fib(8);
//	cout << cnt << endl;
//}
//void Test2()
//{
//	int a[5] = { 1,3,5,7,9 };
//	int* p = (int*)(&a + 1);
//	cout << *(a + 1) << *(p - 1) << endl;
//}
//int main()
//{
////	A s;
//////	A s1 = s;   用一个对象初始化一个同类对象会调用拷贝构造
////	A s2;
//////	s2 = s;     将类的一个对象赋值给该类的另一个对象不会调用拷贝构造
//
//	Test1();
//	Test2();
//	return 0;
//}
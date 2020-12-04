//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int foo1(int n);
//void Test1()
//{
//	cout << foo1(5) << endl;
//}
//int foo1(int n)
//{
//	if (n < 2)
//	{
//		return n;
//	}
//	else
//	{
//		return 2 * foo1(n - 1) + foo1(n - 2);
//	}
//}
//
//void Test2()
//{
//	int x = 3, y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			cout << "first";
//		case 1:
//			cout << "second";
//			break;
//		default:
//			cout << "hello";
//		}
//	case 2:
//		cout << "third";
//	}
//}
//
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//typedef void (*FUN)();
//void Test3()
//{
//	cout << sizeof(A) << " " << sizeof(B) << endl;
//	extern const int array[256];
//}
//
//int main()
//{
////	Test1();
//
////	Test2();
//
//	Test3();
//	return 0;
//}
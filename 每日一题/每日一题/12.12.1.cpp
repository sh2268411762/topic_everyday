//#include <iostream>
//using namespace std;
//
//
//void Test1()
//{
//	char a[] = "programming", b[] = "language";
//	char* p1, * p2;
//	int l;
//	p1 = a, p2 = b;
//	for (l = 0; l < 7; l++)
//	{
//		if (*(p1 + l) == *(p2 + l))
//		{
//			cout << *(p1 + l);
//		}
//	}
//}
//
//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//	{
//		return n;
//	}
//	n = n + i;
//	i++;
//	return f(n);
//}
//void Test2()
//{
//	cout << f(1);
//}
//int main()
//{
////	Test1();
//
//	Test2();
//	return 0;
//}
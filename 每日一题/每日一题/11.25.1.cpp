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
//		cout << "����" << endl;
//	}
//
//	A(const A& a)
//	{
//		cout << "��������" << endl;
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
//////	A s1 = s;   ��һ�������ʼ��һ��ͬ��������ÿ�������
////	A s2;
//////	s2 = s;     �����һ������ֵ���������һ�����󲻻���ÿ�������
//
//	Test1();
//	Test2();
//	return 0;
//}
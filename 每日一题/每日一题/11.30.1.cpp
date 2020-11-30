//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//template<class T>
//class BigNumber
//{
//	long n;
//
//public:
//	BigNumber(T i) 
//		:n(i)
//	{
//
//	}
//	BigNumber operator+(BigNumber b)
//	{
//		return BigNumber(n + b.n);
//	}
//};
//
//class A
//{
//	friend long fun(A s)
//	{
//		if (s.x < 3)
//		{
//			return 1;
//		}
//		return s.x + fun(A(s.x - 1));
//	}
//public :
//	A(long a)
//	{
//		x = a--;
//	}
//
//	A(int aa, int bb)
//	{
//		a = aa--;
//		b = a * bb;
//	}
//
//public:
//	long x;
//	int a;
//	int b;
//};
//
//class parent
//{
//	int i;
//protected:
//	int x;
//public:
//	parent()
//	{
//		x = 0; i = 0;
//	}
//	void change()
//	{
//		x++; i++;
//	}
//	void display();
//};
//
//class son :public parent
//{
//public:
//	void modify();
//};
//void parent::display()
//{
//	cout << "x=" << x << endl;
//}
//void son::modify()
//{
//	x++;
//}
//int main()
//{
//	son A; parent B;
//	A.display();
//	A.change();
//	A.modify();
//	A.display();
//	B.change();
//	B.display();
//
//	//A x(4, 5);
//	//cout << x.a << " " << x.b << endl;
//
//	//int a = 1, b = 2, c = 3, d = 0;
//	//if (a == 1 && b++ == 2)
//	//if (b != 2 || c-- != 3)
//	//	printf("%d,%d,%d\n", a, b, c);
//	//else
//	//	printf("%d,%d,%d\n", a, b, c);
//	//else
//	//	printf("%d,%d,%d\n", a, b, c);
//
//	//int sum = 0;
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	sum += fun(A(i));
//	//}
//	//cout << sum << endl;
//
//	//int a = 1, b = 0, c = -1, d = 0;
//	//d = ++a || ++b && ++c;
//	//cout << d << endl;
//
//	//BigNumber<int> b1(10);
//	//BigNumber<int> b2(20);
//	//b1 + 3;
//	//b1 + b2;
//	//3 + b1;
//	//3 + 3;
//
//
//
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int add(int a, int b, int c)
//{
//	return a + b + c;
//}
//int add(int a = 10, int b = 20)
//{
//	return a + b;
//}
//void Test1()
//{
//	cout << add() << endl;
//}
//
//class B
//{
//public:
//	B()
//	{
//		cout << "default constructor" << endl;
//	}
//	~B()
//	{
//		cout << "destructed" << " ";
//	}
//	B(int i) :data(i)
//	{
//		cout << "constructed by prameter" << data << endl;
//	}
//private:
//	int data;
//};
//B Play(B b)
//{
//	return b;
//}
//void Test2()
//{
//	B temp = Play(5);
//}
//
//class AA
//{
//public:
//	virtual void print()
//	{
//		cout << "A::print()" << endl;
//	}
//};
//class BB :public AA
//{
//public:
//	virtual void print()
//	{
//		cout << "B::print()" << endl;
//	}
//};
//class CC :public AA
//{
//public :
//	virtual void print()
//	{
//		cout << "C::print()" << endl;
//	}
//};
//void print(AA a)
//{
//	a.print();
//}
//void Test3()
//{
//	AA a, * aa, * ab, * ac;
//	BB b;
//	CC c;
//	aa = &a;
//	ab = &b;
//	ac = &c;
//	a.print();
//	b.print();
//	c.print();
//	aa->print();
//	ab->print();
//	ac->print();
//	print(a);
//	print(b);
//	print(c);
//}
//
//void Test4()
//{
//	int i = 0, a = 1, b = 2, c = 3;
//	i = ++a || ++b || ++c;
//	cout << i << a << b << c << endl;
//}
//int main()
//{
////	Test1();
//	
////	Test2();
//
////	Test3();
//
//	Test4();
//	return EXIT_SUCCESS;
//}
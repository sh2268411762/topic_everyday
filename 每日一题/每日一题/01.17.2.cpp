//#include <iostream>
//using namespace std;
//
//int fun(int num)
//{
//	if (1 == num)   //一个空瓶喝不到
//	{
//		return 0;	//两个空瓶喝一瓶
//	}
//	if (2 == num)
//	{
//		return 1;
//	}
//	return num / 3 + fun(num % 3 + num / 3);
//}
//
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		if (n != 0)
//		{
//			cout << fun(n) << endl;
//		}
//	}
//	return 0;
//}
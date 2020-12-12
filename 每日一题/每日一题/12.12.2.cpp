//#include <iostream>
//using namespace std;
//
//
//int count(int n)
//{
//	//1  1  2  3  5  8
//	//ì³²¨ÄÇÆõÊýÁÐ£¿
//	if (n == 1 || n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return count(n - 1) + count(n - 2);
//	}
//}
//int main()
//{
//	int month = 0;
//	while (cin >> month)
//	{
//		cout << count(month - 1) << endl;
//	}
//	return 0;
//}
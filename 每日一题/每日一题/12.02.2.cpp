//#include<iostream>
//using namespace std;
//
//int fun(int n, int m)
//{
//	if (n == 1)
//	{
//		return (m + 1);
//	}
//	else if (m == 1)
//	{
//		return (n + 1);
//	}
//	else
//	{
//		return fun(n, m - 1) + fun(n - 1, m);
//	}
//}
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		cout << fun(n, m) << endl;
//	}
//	return 0;
//}
//
//
//
//
//
////#include <iostream>
////#include <vector>
////using namespace std;
////
////int fun(int a, int b)
////{
////	int ret1 = 1, ret2 = 1;
////	for (int i = 0; i < b; i++)
////	{
////		ret1 *= (a + b) - i;
////		ret2 *= i + 1;
////	}
////	return ret1 / ret2;
////}
////int main()
////{
////	int m = 0, n = 0;
////	cin >> n;
////	cin >> m;
////	cout << fun(n, m) << endl;
////	return EXIT_SUCCESS;
////}
////
////
////#include <iostream>
////#include <vector>
////using namespace std;
////
////int fun(int a, int b)
////{
////	a++;
////	b++;
////	vector<vector<int>> v;
////	v.resize(a);
////	for (int i = 0; i < a; i++)
////	{
////		v[i].resize(b);
////	}
////
////	for (int i = 0; i < a; i++)
////	{
////		v[i][0] = 1;
////	}
////	for (int j = 0; j < b; j++)
////	{
////		v[0][j] = 1;
////	}
////	for (int i = 1; i < a; i++)
////	{
////		for (int j = 1; j < b; j++)
////		{
////			v[i][j] = v[i - 1][j] + v[i][j - 1];
////		}
////	}
////	return v[a - 1][b - 1];
////}
////int main()
////{
////	int m = 0, n = 0;
////	cin >> n;
////	cin >> m;
////	cout << fun(n, m) << endl;
////	return EXIT_SUCCESS;
////}
//
//
//
//////位运算异或与求和结果一致
//////  1   1   0
//////  0   1   0
//////+:1   0   0
//////^:0   0   0
////
//////& 与进位相同
//////  1   1   0
//////  0   1   0
//////j:0   1   0
//////&:0   1   0
////class UnusualAdd 
////{
////public:
////    int addAB(int A, int B) 
////    {
////        int temp = 0;
////        while (B != 0)
////        {
////            temp = A & B;
////            A = A ^ B;
////            B = temp << 1;
////        }
////        return A;
////    }
////};
////int main()
////{
////    UnusualAdd u;
////    int a = u.addAB(3, 5);
////    cout << a << endl;
////	return EXIT_SUCCESS;
////}
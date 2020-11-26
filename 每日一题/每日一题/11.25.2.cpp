//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	string ret = "", list = "0123456789ABCDEF";
//	if (m == 0)
//	{
//		cout << 0 << endl;
//	}
//	else
//	{
//		while (m)
//		{
//			if (m < 0)
//			{
//				m = -m;
//				cout << "-";
//			}
//			ret = list[m % n] + ret;
//			m /= n;
//		}
//		cout << ret << endl;
//	}
//}
//int main1()
//{
//	int A = 0, B = 0, C = 0;
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//
//	if (a >= -30 && a <= 30 && b >= -30 && b <= 30 && c >= -30 && c <= 30 && d >= -30 && d <= 30)
//	{
//		A = (a + c) / 2;
//		B = (b + d) / 2;
//		C = (d - b) / 2;
//		if (A - B == a && B - C == b && A + B == c && B + C == d)
//		{
//			cout << A << " " << B << " " << C << endl;
//		}
//		else
//		{
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}
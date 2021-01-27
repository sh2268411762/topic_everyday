//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	string str = "";
//	while (cin >> str)
//	{
//		int num = 0;
//		for (int i = 0; i < str.size(); i++)
//		{
//			num += str[i] - '0';
//		}
//		
//		int ret = 0;
//		while (num)
//		{
//			ret += num % 10;
//			num /= 10;
//			if (num == 0 && ret / 10 != 0)
//			{
//				num = ret;
//				ret = 0;
//			}
//		}
//		cout << ret << endl;
//	}
//	return EXIT_SUCCESS;
//}
//
//int main1()
//{
//	vector<int> ret = { 1,1 };
//	for (int i = 2; i < 10001; i++)
//	{
//		ret.push_back((ret[i - 2] + ret[i - 1]) % 10000);
//	}
//	int n = 0, x = 0;
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cin >> x;
//			printf("%04d", ret[x]);
//		}
//		cout << endl;
//	}
//	return EXIT_SUCCESS;
//}
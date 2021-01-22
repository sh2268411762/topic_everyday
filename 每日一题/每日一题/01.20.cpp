//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//
//int main()
//{
//	string str = "";
//	while (cin >> str)
//	{
//		bool flag = true;
//		for (size_t i = 0; i < str.size(); i++)
//		{
//			int ret = -1;
//			for (size_t j = 0; j < str.size(); j++)
//			{
//				if (str[j] == str[i])
//				{
//					ret++;
//				}
//				if (ret > 0)
//				{
//					break;	//大于两个字符
//				}
//			}
//			if (ret == 0)
//			{
//				cout << str[i] << endl;
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			cout << -1 << endl;
//		}
//	}
//	return 0;
//}
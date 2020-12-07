//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
////求因数
//vector<int> yinShu(int m)
//{
//	vector<int> ret;
//	for (int i = 2; i <= sqrt(m); i++)
//	{
//		if (m % i == 0)
//		{
//			ret.push_back(i);
//			if (m / i != i)
//			{
//				ret.push_back(m / i);
//			}
//		}
//	}
//	return ret;
//}
//int fun(int n, int m)
//{
//	if (m == n)//起点终点相同
//	{
//		return 0;
//	}
//
//	//总共步数
//	int temp = m - n + 1;
//	vector<int> ret;
//	ret.reserve(temp);
//	ret[0] = 0;  //起点
//	for (int i = 1; i < temp; i++)
//	{
//		ret[i] = 100001;
//	}
//	for (int i = 0; i < temp; i++)
//	{
//		if (ret[i] == 100001)//该位置不能往前走
//		{
//			ret[i] = 0;
//			continue;
//		}
//		vector<int> v = yinShu(i + n);//i+n为石板号
//		for (int j = 0; j < v.size(); j++)
//		{
//			int x = v[j];
//			if (i + n + x <= m)
//			{
//				ret[i + x] = min(ret[i + x], ret[i] + 1);
//			}
//		}
//	}
//	if (ret[temp - 1] == 0)
//	{
//		return -1;
//	}
//	else
//	{
//		return ret[temp - 1];
//	}
//}
//int main()
//{
//	int N = 0, M = 0;
//	cin >> N >> M;
//	int ret = 0;
//	cout << fun(N, M) << endl;
//
//	return EXIT_SUCCESS;
//}
//
//
//
//
//
//
//
//
//
//
//
//////参数解析
////int main()
////{
////	string str = "";
////	while (getline(cin, str))
////	{
////		vector<string> s;//参数
////        bool flag = false;
////        string temp = "";
////        for (int i = 0; i < str.size(); i++) 
////        {
////            if (flag) //flag为真即已经找到左引号
////            {
////                if (str[i] != '\"')//不为右引号就继续往后加
////                {
////                    temp += str[i];
////                }
////                else
////                {
////                    flag = false;
////                }
////            }
////            else 
////            {
////                if (str[i] == ' ') //一个空格则为一个参数
////                {
////                    s.push_back(temp);
////                    temp = "";//尾插后将temp置为空
////                }
////                else if (str[i] == '\"')//进入引号循环
////                {
////                    flag = true;
////                }
////                else
////                {
////                    temp += str[i];
////                }
////            }
////        }
////        s.push_back(temp);//插入最后一个不被空格终止的temp字符串参数
////        cout << s.size() << endl;
////        for (size_t i = 0; i < s.size(); i++)
////        {
////            cout << s[i] << endl;
////        }
////	}
////	return EXIT_SUCCESS;
////}
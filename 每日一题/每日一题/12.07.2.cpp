//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
////������
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
//	if (m == n)//����յ���ͬ
//	{
//		return 0;
//	}
//
//	//�ܹ�����
//	int temp = m - n + 1;
//	vector<int> ret;
//	ret.reserve(temp);
//	ret[0] = 0;  //���
//	for (int i = 1; i < temp; i++)
//	{
//		ret[i] = 100001;
//	}
//	for (int i = 0; i < temp; i++)
//	{
//		if (ret[i] == 100001)//��λ�ò�����ǰ��
//		{
//			ret[i] = 0;
//			continue;
//		}
//		vector<int> v = yinShu(i + n);//i+nΪʯ���
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
//////��������
////int main()
////{
////	string str = "";
////	while (getline(cin, str))
////	{
////		vector<string> s;//����
////        bool flag = false;
////        string temp = "";
////        for (int i = 0; i < str.size(); i++) 
////        {
////            if (flag) //flagΪ�漴�Ѿ��ҵ�������
////            {
////                if (str[i] != '\"')//��Ϊ�����žͼ��������
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
////                if (str[i] == ' ') //һ���ո���Ϊһ������
////                {
////                    s.push_back(temp);
////                    temp = "";//β���temp��Ϊ��
////                }
////                else if (str[i] == '\"')//��������ѭ��
////                {
////                    flag = true;
////                }
////                else
////                {
////                    temp += str[i];
////                }
////            }
////        }
////        s.push_back(temp);//�������һ�������ո���ֹ��temp�ַ�������
////        cout << s.size() << endl;
////        for (size_t i = 0; i < s.size(); i++)
////        {
////            cout << s[i] << endl;
////        }
////	}
////	return EXIT_SUCCESS;
////}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//
//删除公共字符串
//int main()
//{
//	string str1 = "";
//	string str2 = "";
//	getline(cin, str1);
//	getline(cin, str2);
//	vector<size_t>v;
//
//	for (size_t i = 0; i < str1.size(); i++)
//	{
//		for (size_t j = 0; j < str2.size(); j++)
//		{
//			if(str1[i]==str2[j])
//				v.push_back(i);
//		}
//	}
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		v[i] -= i;
//	}
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		str1.erase(v[i], 1);
//	}
//	cout << str1 << endl;
//	return 0;
//}
////void Test1()
////{
////	printf("%s,%5.3s\n", "computer", "computer");
////	cout << (11 | 10) << endl;
////	int a = 10;
////	double b = 3.4;
////	auto c = 'A' + a + b;
////	int p = 1009;
////	int* pp = &p;
////	*pp++;
////	cout << p << endl;
////}
////void Test2()
////{
////	int x, y, count = 0;
////	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
////	{
////		count++;
////	}
////	cout << count << endl;
////}
////
////
////////组队竞赛
//////int main1()
//////{
////////	Test1();
////////	Test2();
//////	long long n = 0;
//////	cin >> n;
//////	int num;
//////	vector<int> v;
//////	while (cin >> num)
//////	{
//////		v.push_back(num);
//////		if (cin.get() == '\n')
//////		{
//////			break;
//////		}
//////	}
//////	sort(v.begin(), v.end());
//////
//////
//////	long long ret = 0, j = 0;
//////	for (int i = (3 * n) - 2; i >= 0; i -= 2)
//////	{
//////		if (j < n)
//////		{
//////			ret += v[i];
//////			++j;
//////		}
//////		else
//////			break;
//////	}
//////	cout << ret << endl;
//////	return 0;
//////}
//#include <iostream>
//#include <vector>
//using namespace std;
//
////�˿��ƴ�С
//
//
//
//
//
//////������
////bool fun(int n)
////{
////	vector<int> v;
////	for (int i = 1; i < n; i++)
////	{
////		if (n % i == 0)
////		{
////			v.push_back(i);
////		}
////	}
////	int ret = 0;
////	for (auto e : v)
////	{
////		ret += e;
////	}
////	if (ret == n)
////	{
////		return true;
////	}
////	return false;
////}
////int count(int n)
////{
////	if (n > 0 || n <= 500000)
////	{
////		int count = 0;
////		for (int i = 1; i <= n; i++)
////		{
////			if (fun(i))
////			{
////				count++;
////			}
////		}
////		return count;
////	}
////	else
////	{
////		return -1;
////	}
////}
////int main()
////{
////	int num = 0;
////	while (cin >> num)
////	{
////		cout << count(num) << endl;
////	}
////	return EXIT_SUCCESS;
////}
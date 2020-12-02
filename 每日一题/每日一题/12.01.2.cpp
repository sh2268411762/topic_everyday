//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////最小公倍数
//int main()
//{
//	int a = 0, b = 0;
//	cin >> a >> b;
//
//	if (a < b)
//	{
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//	}
//
//	for (int i = a; i <= a * b; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			cout << i << endl;
//			break;
//		}
//	}
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
//////两种排序方式
////int main()
////{
////	int n = 0;
////	cin >> n;
////
////	vector<string> v;
////	v.resize(n);
////	for (int i = 0; i < n; i++)
////	{
////		string temp = "";
////		cin >> temp;
////		v[i] = temp;
////	}
////
////	
////
////	bool isLength = false;
////	bool isDict = false;
////
////	size_t i = 1;
////	int len = v[0].size();
////	while (i < n)
////	{
////		if (len > v[i].size())
////		{
////			break;
////		}
////		len = v[i].size();
////		i++;
////	}
////	if (i == n)
////	{
////		isLength = true;
////	}
////
////	i = 0;
////	while ((i + 1) < v.size())
////	{
////		if (v[i].compare(v[i + 1]) > 0)
////		{
////			break;
////		}
////		i++;
////	}
////	if (i == n - 1)
////	{
////		isDict = true;
////	}
////
////	if (isDict && isLength)
////	{
////		cout << "both";
////	}
////	else if (isDict && !isLength)
////	{
////		cout << "lexicographically";
////	}
////	else if (!isDict && isLength)
////	{
////		cout << "lengths";
////	}
////	else
////	{
////		cout << "none";
////	}
////	return EXIT_SUCCESS;
////}
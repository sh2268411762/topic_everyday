//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int maxsumofSubarray(vector<int>& arr, int n)
//{
//	int sum = arr[0];
//	int ret = arr[0];
//	for (size_t i = 1; i < n; i++)
//	{
//		if (sum >= 0)
//		{
//			sum += arr[i];
//		}
//		else
//		{
//			sum = arr[i];
//		}
//		if (ret < sum)
//		{
//			ret = sum;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int num = 0;
//	cin >> num;
//	if (num >= 1 && num <= 100000)
//	{
//		vector<int> v;
//		int temp;
//		while (cin >> temp)
//		{
//			v.push_back(temp);
//			if (cin.get() == '\n')
//			{
//				break;
//			}
//		}
//		cout << maxsumofSubarray(v, num) << endl;
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
//
//
//
//
//bool palindrome(string s)
//{
//	if (s == "")
//	{
//		return true;
//	}
//	int start = 0, end = s.size() - 1;
//
//	while (start < end)
//	{
//		if (s[start] != s[end])
//		{
//			return false;
//		}
//		start++;
//		end--;
//	}
//	return true;
//}
//int main1()
//{
//	string str1 = "";
//	string str2 = "";
//	cin >> str1;
//	cin >> str2;
//
//	int count = 0;
//	for (size_t i = 0; i < str1.size() + 1; i++)
//	{
//		string temp = str1;
//		temp.insert(i, str2);
//		if (palindrome(temp))
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}
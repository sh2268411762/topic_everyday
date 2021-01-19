//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//
//int getCommonStrLength(string firstStr, string secondStr)
//{
//	//转换为小写
//	transform(firstStr.begin(), firstStr.end(), firstStr.begin(), ::tolower);
//	transform(secondStr.begin(), secondStr.end(), secondStr.begin(), ::tolower);
//
//	int ret = 0;
//	int firstLen = firstStr.size(), rightLen = secondStr.size();
//
//
//	vector<vector<int>> dp(firstLen + 1, vector<int>(rightLen + 1, 0));
//	for (int i = 1; i <= firstLen; ++i) 
//	{
//		for (int j = 1; j <= rightLen; ++j) 
//		{
//			if (firstStr[i - 1] == secondStr[j - 1])
//			{
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			}
//			if (dp[i][j] > ret)
//			{
//				ret = dp[i][j];
//			}
//		}
//	}
//	return ret;
//}
////公共字符串
//int main()
//{
//	string str1 = "", str2 = "";
//	while (cin >> str1 >> str2)
//	{
//		cout << getCommonStrLength(str1, str2) << endl;
//	}
//	return EXIT_SUCCESS;
//}
////反转字符串
//int main1()
//{
//	string str = "";
//	while (cin >> str)
//	{
//		size_t left = 0, right = str.size() - 1;
//		while (left < right)
//		{
//			char temp = str[left];
//			str[left] = str[right];
//			str[right] = temp;
//			left++, right--;
//		}
//		cout << str << endl;
//	}
//	return 0;
//}
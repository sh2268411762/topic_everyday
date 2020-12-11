//#include <iostream>
//#include <string>
//using namespace std;
//
//
////给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。
//class Solution
//{
//public:
//    string addStrings(string num1, string num2)
//    {
//        //num1位数大于num2
//        if (num1.size() < num2.size())
//        {
//            num1.swap(num2);
//        }
//
//        string ret(num1.size() + 1, '0');
//        char step = 0;
//        for (int iL = num1.size() - 1, iR = num2.size() - 1; iL >= 0; iL--, iR--)
//        {
//            char ch = num1[iL] - '0' + step;
//            if (iR >= 0)
//            {
//                ch += num2[iR] - '0';
//            }
//            step = 0;
//            if (ch >= 10)
//            {
//                step = 1;
//                ch -= 10;
//            }
//            ret[iL + 1] += ch;
//
//        }
//
//        if (1 == step)
//        {
//            ret[0] += step;
//        }
//        else
//        {
//            ret.erase(ret.begin());
//        }
//        return ret;
//    }
//};
//int main()
//{
//    Solution s1;
//    string str1 = "", str2 = "";
//    while (cin >> str1 >> str2)
//    {
//        cout << s1.addStrings(str1, str2) << endl;
//    }
//    return 0;
//}
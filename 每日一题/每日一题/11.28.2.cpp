//#include <iostream>
//#include <string>
//using namespace std;
//
//class Solution 
//{
//public:
//    int StrToInt(string str) 
//    {
//        long long ret = 0;
//        size_t i = 0;
//        int s = 1;
//        if (str[0] == '-' || str[0] == '+')
//        {
//            i = 1;
//        }
//
//        for (; i < str.size(); i++)
//        {
//            if (str[i] >= '0' && str[i] <= '9')
//            {
//                ret = ret * 10 + str[i] - 48;
//            }
//            else
//            {
//                return 0;
//            }
//        }
//        if (str[0] == '-')
//        {
//            s = -1;
//        }
//        return ret * s;
//    }
//};
//
//int main()
//{
//    Solution s;
//    string str1 = "";
//    cin >> str1;
//    cout << s.StrToInt(str1) << endl;
//    return 0;
//}
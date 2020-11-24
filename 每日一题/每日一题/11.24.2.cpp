//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//class Solution 
//{
//public:
//    int MoreThanHalfNum_Solution(vector<int> numbers) 
//    {
//        int n = 0;
//        if (numbers.size() % 2 == 0)
//        {
//            n = numbers.size() / 2;
//        }
//        else
//        {
//            n = numbers.size() / 2 + 1;
//        }  //确定数组的一半
//
//        int ret = numbers[0];
//        bool flag = false;
//
//        for (size_t i = 0; i < numbers.size(); i++)
//        {
//            int count = 0;
//            for (size_t j = 0; j < numbers.size(); j++)
//            {
//                if (numbers[i] == numbers[j])
//                {
//                    count++;
//                }
//            }
//            if (numbers.size() % 2 == 0)
//            {
//                if (count > n)
//                {
//                    flag = true;
//                    ret = numbers[i];
//                    break;
//                }
//            }
//            else
//            {
//                if (count >= n)
//                {
//                    flag = true;
//                    ret = numbers[i];
//                    break;
//                }
//            }
//
//        }
//        if (flag)
//        {
//            return ret;
//        }
//        else
//        {
//            return 0;
//        }
//
//    }
//};
//
//int main()
//{
//    vector<int> v{ 1,2,3,2,2,2,5,4,2 };
//    Solution s;
//    cout << s.MoreThanHalfNum_Solution(v) << endl;
//    return 0;
//}
//
//int main1() 
//{
//    string ret = "", str;
//    cin >> str;
//    int i = 0, max_len = 0, strlen = str.length();
//    while (i < strlen) 
//    {
//        if (str[i] < '0' || str[i] > '9')
//        {
//            i++;
//        }
//        else 
//        {
//            //abcd12345ed125ss123456789
//            int len = 0;
//            string temp = "";
//            while (i < strlen && str[i] <= '9' && str[i] >= '0') 
//            {
//                temp = temp + str[i];
//                i++; 
//                len++;
//            }//决定字符串
//            if (len > max_len)  //按长度对ret进行更新
//            { 
//                max_len = len; 
//                ret = temp; 
//            }
//        }
//    }
//    cout << ret << endl;
//    return 0;
//}
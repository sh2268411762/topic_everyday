//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//
//class Solution 
//{
//public:
//    /**
//     *  奇数位上都是奇数或者偶数位上都是偶数
//     *  输入：数组arr，长度大于2
//     *  len：arr的长度
//     *  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
//     */
//    void oddInOddEvenInEven(vector<int>& arr, int len) 
//    {
//        int i = 0, j = 1;
//        //i偶数，j奇数
//        while (i < len && j < len)
//        {
//            //arr[len-1] 即最后一个数字为偶数时
//            //让其与 i 即偶数位交换，保证偶数位上都是偶数
//            if (0 == arr[len - 1] % 2)
//            {
//                swap(arr[len - 1], arr[i]);
//                i += 2;
//            }
//            //否则即为奇数，让其与奇数位交换
//            else
//            {
//                swap(arr[len - 1], arr[j]);
//                j += 2;
//            }
//        }
//    }
//};
//int main()
//{
//    int n = 0;//猴子数
//    while (cin >> n)
//    {
//        if (n <= 0) //如果输入小于0
//        {
//            break;
//        }
//
//        long a = (long)(pow(5, n) - 4);
//        long b = (long)(pow(4, n) + n - 4);
//        cout << a << " " << b << endl;
//    }
//	return EXIT_SUCCESS;
//}
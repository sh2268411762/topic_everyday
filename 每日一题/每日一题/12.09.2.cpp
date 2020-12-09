//#include <iostream>
//#include <vector>
//using namespace std;
//
////思路：假设有一序列 a1<a2<a3<a4<...<an，选出多少个能够保证覆盖n种颜色？
////答案是 sum(a1...an)-a1+1，类似鸽巢原理
////所以先求出左手套和右手套哪边能够覆盖n种颜色，而且还能少拿手套？
////答案是 min(leftSum-leftMin+1,rightSum-rightMin+1)，这个确定以后，
////只需要在另一边随便选择一个就能够保证至少有一种颜色匹配了
////另外要注意某种颜色手套数为0的情况
//class Gloves {
//public:
//    int findMinimum(int n, vector<int> left, vector<int> right) {
//        // write code here
//        int sum = 0;
//        int leftSum = 0, rightSum = 0;
//        int leftMin = 30, rightMin = 30;
//        for (int i = 0; i < n; i++)
//        {
//            if (left[i] * right[i] == 0)sum += (left[i] + right[i]);
//            else {
//                leftSum += left[i];
//                rightSum += right[i];
//                leftMin = min(leftMin, left[i]);
//                rightMin = min(rightMin, right[i]);
//            }
//        }
//        return sum + min(leftSum - leftMin + 1, rightSum - rightMin + 1) + 1;
//    }
//};
//
////class A
////{
////public:
////	static int findNumberOf1(int num)
////	{
////		int ret = 0;
////		while (num > 0)
////		{
////			if (num & 1)
////			{
////				ret++;
////			}
////			num >>= 1;
////		}
////		return ret;
////	}
////};
////int main()
////{
////	A a;
////	int n = 0;
////	while (cin >> n)
////	{
////		cout << a.findNumberOf1(n) << endl;
////	}
////	return EXIT_SUCCESS;
////}
//#include <iostream>
//#include <vector>
//using namespace std;
//
////˼·��������һ���� a1<a2<a3<a4<...<an��ѡ�����ٸ��ܹ���֤����n����ɫ��
////���� sum(a1...an)-a1+1�����Ƹ볲ԭ��
////��������������׺��������ı��ܹ�����n����ɫ�����һ����������ף�
////���� min(leftSum-leftMin+1,rightSum-rightMin+1)�����ȷ���Ժ�
////ֻ��Ҫ����һ�����ѡ��һ�����ܹ���֤������һ����ɫƥ����
////����Ҫע��ĳ����ɫ������Ϊ0�����
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
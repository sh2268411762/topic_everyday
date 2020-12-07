//#include <iostream>
//using namespace std;
//
////查找组成一个偶数最接近的两个素数
//
//bool fun(int n)
//{
//	if (n <= 1)
//	{
//		return false;
//	}
//	if (n == 2)
//	{
//		return true;
//	}
//	for (int i = 3; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int num = 0;
//	while (cin >> num)
//	{
//		if (num % 2 == 0)
//		{
//			int r1 = 0, r2 = 0;
//			for (int i = 0; i <= num / 2 ; i++)
//			{
//				if (fun(i) && fun(num - i))
//				{
//					if (i > r1)
//					{
//						r1 = i;
//						r2 = num - i;
//					}
//				}
//			}
//			cout << r1 << endl << r2 << endl;
//		}
//		else
//		{
//			cout << 0;
//		}
//	}
//	
//	return EXIT_SUCCESS;
//}
//
//
//////二进制插入
//////给定两个32位整数n和m，同时给定i和j，将m的二进制数位插入到n的二进制的第j到第i位,
//////保证n的第j到第i位均为零，且m的二进制位数小于等于i-j+1，其中二进制的位数从0开始由低到高。
////class BinInsert 
////{
////public:
////    //m,n 给定两个数  j：起始  i：末尾
////    int binInsert(int n, int m, int j, int i) 
////    {
////        int ret = 0;
////        m <<= j;
////        ret = n | m;
////        return ret;
////    }
////    //               j=2  i=6
////    //1024   0100 0 (000 00) 00
////    //19     0000 0（001 00）11
////    //把19   左移j位与1024 进行与运算
////    //       0000 0（100 11）00 -->0100 0100 1100
////    //1100   0100 0（100 11）00
////};
////int main()
////{
////    BinInsert b;
////    cout << b.binInsert(1024, 19, 2, 6) << endl;
////	return EXIT_SUCCESS;
////}
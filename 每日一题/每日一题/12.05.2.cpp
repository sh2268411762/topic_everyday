//#include <iostream>
//using namespace std;
//
////�������һ��ż����ӽ�����������
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
//////�����Ʋ���
//////��������32λ����n��m��ͬʱ����i��j����m�Ķ�������λ���뵽n�Ķ����Ƶĵ�j����iλ,
//////��֤n�ĵ�j����iλ��Ϊ�㣬��m�Ķ�����λ��С�ڵ���i-j+1�����ж����Ƶ�λ����0��ʼ�ɵ͵��ߡ�
////class BinInsert 
////{
////public:
////    //m,n ����������  j����ʼ  i��ĩβ
////    int binInsert(int n, int m, int j, int i) 
////    {
////        int ret = 0;
////        m <<= j;
////        ret = n | m;
////        return ret;
////    }
////    //               j=2  i=6
////    //1024   0100 0 (000 00) 00
////    //19     0000 0��001 00��11
////    //��19   ����jλ��1024 ����������
////    //       0000 0��100 11��00 -->0100 0100 1100
////    //1100   0100 0��100 11��00
////};
////int main()
////{
////    BinInsert b;
////    cout << b.binInsert(1024, 19, 2, 6) << endl;
////	return EXIT_SUCCESS;
////}
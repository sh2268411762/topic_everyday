//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//int main()
//{
//	vector<int> fib(100001, 0);
//	fib[0] = 1;
//	fib[1] = 1;
//	for (int i = 2; i <= 100000; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//		fib[i] = fib[i] % 1000000;
//	}
//	int n = 0;
//	while (cin >> n)
//	{
//		if (n < 29) 
//		{
//			printf("%d\n", fib[n]);
//		}
//		else 
//		{
//			printf("%06d\n", fib[n]);
//		}
//	}
//	return EXIT_SUCCESS;
//}
//
//int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//bool isLeap(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int getMoney(int y1, int y2, int m1, int m2, int d1, int d2)
//{
//	int money = 0;     
//	if (m1 == 2 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 11)
//	{
//		//素数月，每天1元
//		money = 1;
//	}
//	else
//	{
//		money = 2;
//	}
//	while ((y1 != y2) || (m1 != m2) || (d1 != d2)) 
//	{ 
//		//判断2月天数
//		if (isLeap(y1))
//		{
//			days[2] = 29;
//		}
//		else
//		{
//			days[2] = 28;
//		}
//
//		if (d1 <= days[m1])
//		{ 
//			if (m1 == 2 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 11) 
//			{ 
//				money += 1;                 
//				d1++; 
//			} 
//			else 
//			{ 
//				money += 2;                 
//				d1++; 
//			} 
//		} 
//		else 
//		{ 
//			if (m1 == 12) 
//			{ 
//				y1++;                
//				m1 = 1;                 
//				d1 = 1; 
//			} 
//			else 
//			{ 
//				m1++;                 
//				d1 = 1; 
//			} 
//		} 
//	}     
//	return money;
//}
//int main1()
//{
//	int year1 = 0, month1 = 0, day1 = 0, year2 = 0, month2 = 0, day2 = 0;
//	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
//	{
//		cout << getMoney(year1, year2, month1, month2, day1, day2) << endl;
//	}
//	return EXIT_SUCCESS;
//}
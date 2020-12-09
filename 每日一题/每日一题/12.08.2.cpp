//#include <iostream>
//using namespace std;
//
//
//
//int days[] = { 0,31,59,90,120,151,181,212,243,373,304,334,465 };
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	while (cin >> year >> month >> day)
//	{
//		int ret = days[month - 1] + day;
//		if (((year % 4 == 0 && year % 100 != 0)) || (year % 400 == 0) && month > 2)
//		{
//			ret++;
//		}
//		cout << ret << endl;
//	}
//	return EXIT_SUCCESS;
//}
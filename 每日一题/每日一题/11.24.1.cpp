//#include <iostream>
//#include <vector>
//using namespace std;
//
//void Test()
//{
//	char a[10] = { '1','2','3','4','5','6','7','8','9',0 };
//	char* p;
//	int i = 8;
//	p = a + i;
//	printf("%s\n", p - 3);
//}
//
//int Test1()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++)
//	{
//		k++;
//	}
//	return k;
//}
//void Test2()
//{
//	vector<int> a;
//	a.push_back(100);
//	a.push_back(300);
//	a.push_back(300);
//	a.push_back(300);
//	a.push_back(300);
//	a.push_back(500);
//	vector<int>::iterator it;
//	for (it = a.begin(); it != a.end(); it++)
//	{
//		if (*it == 300)
//		{
//			it = a.erase(it);
//		}
//	}
//	for (it = a.begin(); it != a.end(); it++)
//	{
//		cout << *it << " ";
//	}
//}
//
//int main()
//{
////	Test();
////	cout << Test1() << endl;
//	Test2();
//	return 0;
//}
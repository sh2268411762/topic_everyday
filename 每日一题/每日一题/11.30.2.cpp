//#include <iostream>
//#include <vector>
//using namespace std;
//
////判断括号合法性
//class Parenthesis 
//{
//public:
//    bool chkParenthesis(string A, int n) 
//    {
//        if (n % 2 != 0 || A.empty())
//        {
//            return false;
//        }
//
//        int left = 0, right = 0;
//        for (size_t i = 0; i < A.size(); i++)
//        {
//            if (A[i] != '(' && A[i] != ')')
//            {
//                return false;
//            }
//            if (A[i] == '(')
//            {
//                left++;
//            }
//            if (A[i] == ')')
//            {
//                right++;
//            }
//        }
//        if (left == right)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//};
//int main()
//{
//
//    return EXIT_SUCCESS;
//}
//
//
//
//
//////斐波那契数列判断
////int fib(int n)
////{
////	if (n == 0)
////	{
////		return 0;
////	}
////	if (n == 1)
////	{
////		return 1;
////	}
////
////	int f0 = 0, f1 = 1, f2 = 1;
////	while (n > 2)
////	{
////		f0 = f1;
////		f1 = f2;
////		f2 = f1 + f0;
////		n--;
////	}
////	return f2;
////}
////int main()
////{
////	int N = 0;
////	cin >> N;
////	int ret1 = 0,ret2 = 0;
////
////	int i = 0;
////	while (true)
////	{
////		if (fib(i) < N)
////		{
////			ret1 = N - fib(i);
////		}
////		else
////		{
////			ret2 = fib(i) - N;
////			break;
////		}
////		i++;
////	}
////	if (ret1 < ret2)
////	{
////		cout << ret1 << endl;
////	}
////	else
////	{
////		cout << ret2 << endl;
////	}
////	return EXIT_SUCCESS;
////}
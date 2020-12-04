//#include <iostream>
//#include <string>
//using namespace std;
//
//class A
//{
//public:
//	int getPwdSecurityLevel(string pPasswordStr)
//	{
//		int ret = 0;
//		//³¤¶È
//		int len = pPasswordStr.size();
//		if (len <= 4)
//		{
//			ret += 5;
//		}
//		else if (len >= 8)
//		{
//			ret += 25;
//		}
//		else
//		{
//			ret += 10;
//		}
//
//		//×ÖÄ¸£¬Êý×Ö£¬×Ö·û
//		bool chara = false, charA = false;//Ð¡Ð´×ÖÄ¸£¬´óÐ´×ÖÄ¸
//		int ch = 0, sum = 0;
//		bool flagS = false, flagC = false;
//
//		int start = 0;
//		while (start < len - 1)
//		{
//			if (pPasswordStr[start] >= 'a' && pPasswordStr[start] <= 'z')
//			{
//				chara = true;
//			}//Ð¡Ð´×ÖÄ¸
//			else if (pPasswordStr[start] >= 'A' && pPasswordStr[start] <= 'Z')
//			{
//				charA = true;
//			}//´óÐ´×ÖÄ¸
//			else if (isdigit(pPasswordStr[start]))
//			{
//				flagS = true;
//				sum++;
//			}
//			else
//			{
//				flagC = true;
//				ch++;
//			}
//			start++;
//		}
//
//		//×ÖÄ¸
//		if ((chara && !charA ) || (!chara && charA ))
//		{
//			ret += 10;
//		}
//		else if (chara && charA)
//		{
//			ret += 20;
//		}
//
//		//Êý×Ö
//		if (sum > 1)
//		{
//			ret += 20;
//		}
//		else if (flagS)
//		{
//			ret += 10;
//		}
//
//		//·ûºÅ
//		if (ch > 1)
//		{
//			ret += 25;
//		}
//		else if (flagC)
//		{
//			ret += 10;
//		}
//
//		//½±Àø
//		if (chara && charA && flagS && flagC)
//		{
//			ret += 5;
//		}
//		else if ((chara || charA) && flagS && flagC)
//		{
//			ret += 3;
//		}
//		else if ((chara || charA) && flagS && flagC)
//		{
//			ret += 2;
//		}
//
//		return ret;
//	}//
//};
//
//int main()
//{
//	A a;
//	string password;
//	while (getline(cin, password))
//	{
//		int score = a.getPwdSecurityLevel(password);
//		if (score >= 90)
//		{
//			cout << "VERY_SECURE" << endl;
//		}
//		else if (score >= 80)
//		{
//			cout << "SECURE" << endl;
//		}
//		else if (score >= 70)
//		{
//			cout << "VERY_STRONG" << endl;
//		}
//		else if (score >= 60)
//		{
//			cout << "STRONG" << endl;
//		}
//		else if (score >= 50)
//		{
//			cout << "AVERAGE" << endl;
//		}
//		else if (score >= 25)
//		{
//			cout << "WEAK" << endl;
//		}
//		else
//		{
//			cout << "VERY_WEAK" << endl;
//		}
//	}
//	return EXIT_SUCCESS;
//}
//
//
//
//////¾®×ÖÆåËã·¨
////class Board
////{
////public:
////	bool checkWon(vector<vector<int> > b)
////	{
////		if (b[0][0] + b[1][1] + b[2][2] == 3)
////		{
////			return true;
////		}
////		if (b[0][2] + b[1][1] + b[2][0] == 3)
////		{
////			return true;
////		}
////		for (size_t i = 0; i < 3; i++)
////		{
////			if (b[i][0] + b[i][1] + b[i][2] == 3)
////			{
////				return true;
////			}
////			if (b[0][i] + b[1][i] + b[2][i] == 3)
////			{
////				return true;
////			}
////		}
////		return false;
////	}
////};
////int main()
////{
////	vector<vector<int>> board;
////
////	
////	Board b;
////	bool flag = b.checkWon(board);
////	if (flag)
////	{
////		cout << "true" << endl;
////	}
////	return EXIT_SUCCESS;
////}
//
//
////#include <iostream>
////#include <string>
////using namespace std;
////
////class A
////{
////public:
////	int getPwdSecurityLevel(string pPasswordStr)
////	{
////		int ret = 0;
////		//³¤¶È
////		int len = pPasswordStr.size();
////		if (len <= 4)
////		{
////			ret += 5;
////		}
////		else if (len >= 8)
////		{
////			ret += 25;
////		}
////		else
////		{
////			ret += 10;
////		}
////
////		//×ÖÄ¸£¬Êý×Ö£¬×Ö·û
////		int chara = 0, charA = 0;//Ð¡Ð´×ÖÄ¸£¬´óÐ´×ÖÄ¸
////		int ch = 0, sum = 0;
////		int flagS = 0, flagC = 0;
////
////		int start = 0;
////		while (start < len - 1)
////		{
////			if (pPasswordStr[start] >= 'a' && pPasswordStr[start] <= 'z')
////			{
////				chara = 1;
////			}//Ð¡Ð´×ÖÄ¸
////			else if (pPasswordStr[start] >= 'A' && pPasswordStr[start] <= 'Z')
////			{
////				charA = 1;
////			}//´óÐ´×ÖÄ¸
////			else if (isdigit(pPasswordStr[start]))
////			{
////				flagS = 1;
////				sum++;
////			}
////			else
////			{
////				flagC = 1;
////				ch++;
////			}
////			start++;
////		}
////
////		//×ÖÄ¸
////		if ((chara == 1 && charA == 0) || (chara == 0 && charA == 1))
////		{
////			ret += 10;
////		}
////		else if (chara == 1 && charA == 1)
////		{
////			ret += 20;
////		}
////
////		//Êý×Ö
////		if (sum > 1)
////		{
////			ret += 20;
////		}
////		else if (flagS)
////		{
////			ret += 10;
////		}
////
////		//·ûºÅ
////		if (ch > 1)
////		{
////			ret += 25;
////		}
////		else if (flagC)
////		{
////			ret += 10;
////		}
////
////		//½±Àø
////		if (chara && charA && flagS && flagC)
////		{
////			ret += 5;
////		}
////		else if ((chara || charA) && flagS && flagC)
////		{
////			ret += 3;
////		}
////		else if ((chara || charA) && flagS)
////		{
////			ret += 2;
////		}
////
////		return ret;
////	}//
////};
////
////int main()
////{
////	A a;
////	string password;
////	while (getline(cin, password))
////	{
////		int score = a.getPwdSecurityLevel(password);
////		if (score >= 90)
////		{
////			cout << "VERY_SECURE" << endl;
////		}
////		else if (score >= 80)
////		{
////			cout << "SECURE" << endl;
////		}
////		else if (score >= 70)
////		{
////			cout << "VERY_STRONG" << endl;
////		}
////		else if (score >= 60)
////		{
////			cout << "STRONG" << endl;
////		}
////		else if (score >= 50)
////		{
////			cout << "AVERAGE" << endl;
////		}
////		else if (score >= 25)
////		{
////			cout << "WEAK" << endl;
////		}
////		else
////		{
////			cout << "VERY_WEAK" << endl;
////		}
////	}
////	return EXIT_SUCCESS;
////}
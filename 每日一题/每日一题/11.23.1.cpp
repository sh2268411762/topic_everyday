//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//
//
////class Solution 
////{
////public:
////    int maxProfit(vector<int>& v) 
////    {
////        int min = v[0], Max = 0;  //minΪ��С�۸�MaxΪ�������
////        for (int i = 1; i < v.size(); ++i) 
////        {
////            if (v[i] < min)
////            {
////                min = v[i];
////            }
////            Max = max(Max, v[i] - min);  //��max�����ҳ��������
////        }
////        return Max;
////    }
////};
////
////void Test1()
////{
////    char acX[] = "abc";
////    char acY[] = { 'a','b','c' };
////    char* szX = "abc";
////    char* szY = "abc";
////
////    acX = "uuu";
////    acY = "iii";
////    
////    szX = "bbb";
////    
////
////}
//
//class S
//{
//public:
//    S(int x)
//    {
//        p = new int(x);
//    }
//
//    ~S()
//    {
//        if (p)delete p;
//    }
//
//    int show()
//    {
//        return *p;
//    }
//private:
//    int* p;
//};
//void Test2()
//{
//    struct A
//    {
//        unsigned a : 19;
//        unsigned b : 11;
//        unsigned c : 4;
//        unsigned d : 29;
//        char index;
//    };
//
// //   cout << sizeof(struct A) << endl;
// //   S s(5);
// //   cout << s.show() << endl;
//    //int a[] = { 1,2,3,4 };
//    //int* b = a;
//    //*b += 2;
//    //*(b + 2) = 2;
//    //b++;
//    //printf("%d,%d\n", *b, *(b + 2));
//
//    float a[3][4] = { {1.2,3.4,4.5,5.6},{11.2,22.2,33.3,44.4},{111.1,222.2,333.3,444.4} };
//    for (size_t i = 0; i < 3; i++)
//    {
//        for (size_t j = 0; j < 4; j++)
//        {
//            cout << *(a + i * 4 + j);
//        }
//        cout << endl;
//    }
//}
////�����ַ���
//int main()
//{
//    //���������ã��������������
//    string str;
//    getline(cin, str);
//    auto it1 = str.begin();   
//    auto it2 = it1;                //���Ƶ�������
//    reverse(str.begin(), str.end());  //��������
//
//    while (it2 != str.end())
//    {
//        it2++;
//        if (*it2 == ' ') 
//        {
//            //���ڿո�
//            reverse(it1, it2);
//            //it�������Ӽ�
//            it1 = it2 + 1; //���¸�ֵΪit2����һλ
//        }
//        if (it2 == str.end())   //�ַ���������
//        {
//            reverse(it1, it2);
//        }
//    }
//    cout << str << endl;
//
//    return 0;
//}
////������
//int main1()
//{
//    int n = 0;
//    cin >> n;
//    vector<int> v;
//    v.reserve(n);
//    for (size_t i = 0; i < n; i++)
//    {
//        int num = 0;
//        cin >> num;
//        v.push_back(num);
//    }
//
//    int flag = 0;
//    int ret = 1;
//    for (size_t i = 1; i < n; i++)
//    {
//        if (v[i] > v[i - 1])
//        {
//            if (flag == 0)
//            {
//                flag = 1;
//            }
//            if (flag == -1)
//            {
//                flag = 0;
//                ret++;
//            }
//        }
//        else if (v[i] < v[i - 1])
//        {
//            if (flag == 0)
//            {
//                flag = -1;
//            }
//            if (flag == 1)
//            {
//                flag = 0; 
//                ret++;
//            }
//        }
//    }
//    cout << ret << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//
//class Solution 
//{
//public:
//    /**
//     *  ����λ�϶�����������ż��λ�϶���ż��
//     *  ���룺����arr�����ȴ���2
//     *  len��arr�ĳ���
//     *  ��arr����������λ�϶�����������ż��λ�϶���ż��
//     */
//    void oddInOddEvenInEven(vector<int>& arr, int len) 
//    {
//        int i = 0, j = 1;
//        //iż����j����
//        while (i < len && j < len)
//        {
//            //arr[len-1] �����һ������Ϊż��ʱ
//            //������ i ��ż��λ��������֤ż��λ�϶���ż��
//            if (0 == arr[len - 1] % 2)
//            {
//                swap(arr[len - 1], arr[i]);
//                i += 2;
//            }
//            //����Ϊ����������������λ����
//            else
//            {
//                swap(arr[len - 1], arr[j]);
//                j += 2;
//            }
//        }
//    }
//};
//int main()
//{
//    int n = 0;//������
//    while (cin >> n)
//    {
//        if (n <= 0) //�������С��0
//        {
//            break;
//        }
//
//        long a = (long)(pow(5, n) - 4);
//        long b = (long)(pow(4, n) + n - 4);
//        cout << a << " " << b << endl;
//    }
//	return EXIT_SUCCESS;
//}
//#include <iostream>
//using namespace std;
//
//
//
//
//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//			val(x), next(NULL) {
//	}
//};
//class Solution 
//{
//public:
//	ListNode* ReverseList(ListNode* pHead) 
//	{
//		if (pHead->next == NULL || pHead == NULL)
//		{
//			return NULL;
//		}
//		ListNode* temp = nullptr;
//		ListNode* cur = pHead;
//		ListNode* prev = nullptr;
//		while (cur)
//		{
//			temp = cur->next;
//			cur->next = prev;
//			prev = cur;
//			cur = temp;
//		}
//		//temp已经为空，p来保存新的头结点
//		return prev;
//	}
//};
//
//
//
//int main()
//{
//
//	return 0;
//}
//#include <iostream>
////判断给定的链表中是否有环
//
//
// //Definition for singly-linked list.
// struct ListNode 
// {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) 
//     {
//
//     }
// };
// 
//class Solution 
//{
//public:
//    bool hasCycle(ListNode *head) 
//    {
//        //一个节点，两个节点，或空链表都不能成环
//        if (head->next == NULL || head == NULL || head->next->next == NULL)
//        {
//            return false;
//        }
//        ListNode* p = head;
//        ListNode* q = head;
//        while (p != NULL && p->next != NULL)
//        {
//            p = p->next->next;
//            q = q->next;
//            if (p == q)
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};
//int main()
//{
//    Solution s;
//
//    return EXIT_SUCCESS;
//}
//

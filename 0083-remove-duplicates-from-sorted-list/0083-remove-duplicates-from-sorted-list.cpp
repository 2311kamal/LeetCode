/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {

        if (!head)
            return head;

        ListNode *prev = head, *cur = head->next;

        while (cur)
        {

            if (prev->val == cur->val)
            {

                cur = cur->next;
                prev->next = cur;
            }
            else
            {
                prev=cur;
                cur = cur->next;
                
            }
        }
        return head;
    }
};
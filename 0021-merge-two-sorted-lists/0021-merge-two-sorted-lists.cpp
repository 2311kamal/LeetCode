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

ListNode *small(ListNode *&a, ListNode *&b)
{

    ListNode *t;

    if (a->val < b->val)
    {
        t = a;
        a = a->next;
        return t;
    }
    else
    {
        t = b;
        b = b->next;
        return t;
    }
}

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *h1, ListNode *h2)
    {

        ListNode *h=NULL;
        
        if(h1!=NULL && h2!=NULL){
        if (h1->val > h2->val)
        {
            h = h2;
            h2 = h2->next;
        }
        else
        {
            h = h1;
            h1 = h1->next;
        }}

        
       else if(h1==NULL && h2!=NULL){return h2;}
      else  if(h2==NULL && h1!=NULL){return h1;}

        
        ListNode *t = h;

        while (h1!= NULL && h2!= NULL)
        {

            t->next = small(h1, h2);
            t=t->next;
        }
        if (h1!= NULL)
        {

            t->next = h1;
        }
        if (h2!= NULL)
        {
            t->next = h2;
        }
        return h;
    }
};
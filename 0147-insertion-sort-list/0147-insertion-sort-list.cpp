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
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL)
        return NULL ;
        
        ListNode* temp = head ;
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        ListNode* next = NULL;
        while(temp!= NULL){
          next = temp-> next;
          while(curr->next != NULL && curr->next->val < temp-> val ){
            curr= curr-> next ;

          }
          temp->next = curr->next;
          curr->next = temp;
          curr = dummy;
          temp= next;

        }
        return dummy->next;
    }
};
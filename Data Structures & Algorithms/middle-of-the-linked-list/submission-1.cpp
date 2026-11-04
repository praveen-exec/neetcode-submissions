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
    typedef ListNode* node;
    ListNode* middleNode(ListNode* head) {
        int count=0;
        //step 1 : count the no of nodes
        node temp = head;
        while(temp != nullptr){
            count++;
            temp=temp->next;
        }
        //for middle node --> count/2 times jump
        count=count/2;
        
        for(int i=1;i<=count;i++){
            head=head->next;
        }
        return head;
    }
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
        /*ListNode* temp=node;
        while(temp!=NULL && temp->next!=NULL)
        {
            temp->val=temp->next->val;
            temp=temp->next;
        }
        temp=NULL;*/
    }
};

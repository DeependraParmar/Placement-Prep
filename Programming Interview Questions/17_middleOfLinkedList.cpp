// Solve problem at Leetcode: https://leetcode.com/problems/middle-of-the-linked-list/

// Algorithm is called Tortoise & Hare Algorithm which says: Moving one pointer with double speed and one normally. The moment when fast pointer reaches the destination, the normal pointer would exactly have covered half distance ie reached middle node.

/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie();

        ListNode *slow = head, *fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        return slow;
    }
};
*/
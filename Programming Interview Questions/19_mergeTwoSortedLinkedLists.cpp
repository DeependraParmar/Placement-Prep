// Solve the problem at Leetcode: https://leetcode.com/problems/merge-two-sorted-lists/

/*
class Solution {
private:
    ListNode* solve(ListNode* first, ListNode* second){
        ListNode* current1 = first;
        ListNode* next1 = current1 -> next;
        ListNode* current2 = second;
        ListNode* next2 = current2 -> next;

        if(first -> next == NULL){
            first -> next = second;
            return first;
        }

        while(next1 != NULL && current2 != NULL){
            int c1data = current1 -> val;
            int c2data = current2 -> val;
            int n1data = next1 -> val;

            if(c2data >= c1data && c2data <= n1data){
                current1 -> next = current2;
                next2 = current2 -> next;
                current2 -> next = next1;
                current1 = current2;
                current2 = next2;
            }
            else{
                current1 = next1;
                next1 = next1 -> next;

                if(next1 == NULL){
                    current1 -> next = current2;
                    return first;
                }
            }
        }

        return first;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;

        if(list1 -> val <= list2 -> val)
            return solve(list1, list2);

        return solve(list2, list1);
    }
};
*/
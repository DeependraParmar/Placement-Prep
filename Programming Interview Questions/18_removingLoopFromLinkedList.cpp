// Solve the problem at GeeksForGeeks: https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

// Amazing problem: approach: Loop Detection using Floyd's Cycle Detection Algorithm.
/*  
    1. Finding the point of intersection using Tortoise and hare algorithm.
    2. Finding the number of nodes in the loop.
    3. Reaching the same point of intersection using fast
    4. Starting slow from head and fast from POI. Moving them forward until fast reaches the last node of the loop
    5. Making fast -> next == NULL. Hence removing the loop.
*/

/*
class Solution
{
    public:
    void removeLoop(Node* head){
        if(head == NULL)
            return;

        // Tortoise and hare algorithm for intersection point
        Node* slow = head;
        Node* fast = head -> next;

        while(fast != slow){
            slow = slow -> next;
            fast = fast -> next -> next;

            if(!fast || !fast -> next)
                return;
        }

        // finding the no of nodes in the loop

        int size = 1;
        fast = fast -> next;

        while(fast != slow){
            size++;
            fast = fast -> next;
        }

        slow = head;
        fast = head;

        for(int i=0; i<size-1; i++)
            fast = fast -> next;


        while(fast -> next != slow){
            fast = fast -> next;
            slow = slow -> next;
        }

        fast -> next = NULL;
    }
};
*/
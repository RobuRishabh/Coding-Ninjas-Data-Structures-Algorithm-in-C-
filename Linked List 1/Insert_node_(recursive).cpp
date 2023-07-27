/*
Insert node (recursive)
Send Feedback
You are given a singly linked list of integers and position 'i'.
You must insert the given node at the 'i-th' position in the linked list recursively.


 Note :
Assume that the Indexing for the linked list always starts from 0.

No need to print the list. It has already been taken care of. Only return the new head to the list.
 input format :
The first line contains the elements of the singly linked list separated by a single space.

The second input line contains a single integer depicting the value of 'i'.
The third line of input contains the node data to be inserted.
Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
Output format :
Print the elements of the updated singly linked list.
Sample Input 1 :
3 4 5 2 6 1 9 -1
3
4
Sample Output 1 :
3 4 5 4 2 6 1 9
Sample Input 2 :
30 -1
0
2
Sample Output 2 :
2 30
10 20 30 50 60 6
Constraints :
0 <= M <= 10^5
Where M is the size of the singly linked list.
0 <= i < M

Time Limit:  1sec
*/

/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node* InsertNode(Node *head, int pos, Node* newNode)
{
	if (head == NULL)
    {
        if (pos == 0)
        {
            return newNode;
        }
        return NULL;
    }
	if(pos == 0){
		newNode->next = head;
		return newNode;
	}
   	head -> next = InsertNode(head->next, pos-1, newNode);
	return head;
}

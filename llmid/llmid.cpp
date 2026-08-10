/*struct Node {
    int val;
    struct Node* next;
    Node(int x){
        val = x;
        next = NULL;
    }
};*/

int getMiddleElement(Node* head){
    if(!head)
    Node* slow = head;
    Node* fast = head;
    while( fast -> next ){
        slow = slow -> next;
        fast = fast -> next -> next;
    }return slow -> val;
}

head
 
local
t
h
r
ead
_local
 
keyword
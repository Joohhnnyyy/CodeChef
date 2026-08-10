/*struct Node {
    int val;
    struct Node* next;
    Node(int x){
        val = x;
        next = NULL;
    }
};*/

int getMiddleElement(Node* head){
    if(!head)return -1;
    Node* slow = head;
    Node* fast = head;
    while( fast && fast -> next ){
        slow = slow -> next;
        fast = fast -> next -> next;
    }return slow -> val;
}

fast local
false keyword
FALSE keyword
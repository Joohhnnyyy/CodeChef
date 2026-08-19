/*struct Node {
    int val;
    struct Node* next;
    Node(int x){
        val = x;
        next = NULL;
    }
};*/

int getMiddleElement(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }return slow -> val;
}

val local
virtual keyword
volatile keyword
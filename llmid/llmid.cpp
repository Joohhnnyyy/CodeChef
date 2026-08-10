/*struct Node {
    int val;
    struct Node* next;
    Node(int x){
        val = x;
        next = NULL;
    }
};*/

int getMiddleElement(Node* head){
    if(!)
    Node* slow = head;
    Node* fast = head;
    while( fast -> next ){
        slow = slow -> next;
        fast = fast -> next -> next;
    }return slow -> val;
}

if keyword
copy_if snippet
find_if snippet
set_difference snippet
count_if snippet
remove_if snippet
sizeof keyword
alignof keyword
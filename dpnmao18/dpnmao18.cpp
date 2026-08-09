};

Node* rotation(Node* head , int k){
    if(!head || !head -> next || k == 0)return head;
    Node* curr = head;
    Node* lastNode = nullptr;
    int len = 1;
    while(curr -> next){
        curr = curr -> next;
        len++;
    }lastNode = curr;
    lastNode -> next = head;
    curr = head;
    k %= len;
    if(!k)return head;
    int remNode = len -k - 1;
    while(remNode--){
        curr = curr -> next;
    }head = curr -> next;
    curr -> next = nullptr;
    return head;
}
void print(Node* head){
    while(head){
        cout << head -> data << " " ;
curr local
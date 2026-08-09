}
void print(Node* head){
    while(head){
        cout << head -> data << " " ;
        head = head -> next;
    }
    cout<< "\n";
}

Node* takeInput(int n){
    if( n <= 0)return nullptr;
    int data;
    cin >> data;
    Node* head = new Node(data);
    Node* tail = head;
    for(int i = 1 ; i < n ; i++){
        cin >> data;
        Node* newNode = new Node(data);
        tail -> next = newNode;
        tail = newNode;
    }return head;
}
int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
curr local
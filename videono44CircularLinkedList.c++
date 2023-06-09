#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for Node with data"<<val<<endl;
    }

};

    void insertNode(Node* &tail,int element, int d){

        // empty list
        if(tail == NULL){
            Node* newNode =new Node(d);
            tail = newNode;
            newNode->next =newNode;
        }
        else
        {
            // Not empty list
            Node* curr = tail;

            while(curr->data != element){
                curr=curr->next;
            }

            Node* temp = new Node(d);
            temp -> next = curr -> next;
            curr -> next = temp;

        }
    }

    void print (Node* tail){
        Node* temp =tail;

    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }
        do{
            cout<<tail->data<<" ";
            tail=tail->next;
        }while(tail != temp);
        cout<<endl;
        
    }

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head){
    if(head == NULL){
        return NULL;
    }
    
    Node* temp = head->next;
    while(temp != NULL & temp!=head){
        temp=temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;
}

int main(){
    Node* tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    if(isCircularList(tail)){
        cout<<"Linked List is Circular in nature " <<endl;
    }
    else{
        cout<<"Linked list is not a Circular in nature " <<endl;
    }

    return 0;
}

// Node *removeDuplicates(Node *head)
// {
//     // Write your code here
//     if(head == NULL){
//         return NULL;
//     }
    
//     unordered_set<int> visited;
    
//     Node* curr =head;
//     Node* prev =NULL;

//     while(curr != NULL)
//     {
//        if(visited.find(curr->data)!=visited.end()){
//            prev->next = curr->next;
//            delete(curr);
//        }
//        else
//        {
//            visited.insert(curr->data);
//            prev=curr;
//        }
//        curr=prev->next;
    
//     }
//     return head;
// }
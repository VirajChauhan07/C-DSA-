#include <iostream>
#include<map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // Destructor
    ~Node()
    {
        int value = this->data;
        // Mmeory free
        if(this ->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"The memory of free node with data "<<value <<endl;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}
void deletionOfNode(int position ,Node* &head,Node* &tail){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp ->next =NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev =NULL;

        int cnt=1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next= curr->next;
        curr ->next = NULL; 
        delete curr;
        tail = prev;
    }
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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

bool detectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    map<Node*,bool> visited;

    Node* temp = head;

    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"Present Element"<<temp->data<<endl;
            return true;
        }

        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout<<"slow data"<<slow->data<<endl;
            return slow;
        }
    }

    return NULL;

}

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

Node *removeLoop(Node *head)
{
    if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
}   


int main()
{
    Node *node1 = new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    Node *head = node1;
    Node *tail = node1;
    
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 20);
    print(head);
    insertAtPosition(tail, head, 2, 18);
    print(head);
    insertAtPosition(tail, head, 1, 30);
    print(head);
    insertAtPosition(tail, head, 6, 85);
    print(head);
    tail->next = head->next;
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    // deletionOfNode(6,head,tail);
    // print(head);
    

    Node* removeData = removeLoop(head);
    cout<<"Removed"<<removeData->data<<endl;

    print(head);
    // if(floydDetectLoop(head)){
    //     cout<<"cycle is present"<<endl;
    // }
    // else{
    //     cout<<"cycle is not present "<<endl;

    // Node* loop=getStartingNode(head);
    // cout<<"Starting is "<<loop->data<<endl;

    // if(detectLoop(head)){
    //     cout<<"cycle is present"<<endl;
    // }
    // else{
    //     cout<<"cycle is not present "<<endl;
    // }
    // cout<<"Head"<<head->data<<endl;
    // cout<<"Tail"<<tail->data<<endl;
    
    //     if(isCircularList(tail)){
    //     cout<<"Linked List is Circular in nature " <<endl;
    // }
    // else{
    //     cout<<"Linked list is not a Circular in nature " <<endl;
    // }

    return 0;
}
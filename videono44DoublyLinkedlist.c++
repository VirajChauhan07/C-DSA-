#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

// Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
// Destructor
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

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head,Node *&tail, int d)
{

    if (head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head,Node* &tail, int d)
{

    if (tail == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        
    }
    else
    {
        Node *temp = new Node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(Node *tail, Node *head, int position, int d) 
{

    if (position == 1)
    {
        insertAtHead(head,tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head,tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deletionOfNode(int position ,Node* &head,Node* &tail){
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
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

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL; 
        delete curr;
        
    }
}

int main()
{

    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(head,tail, 11);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    print(head);

    insertAtTail(head,tail, 22);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    print(head);

    insertAtHead(head,tail, 19);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    print(head);

    insertAtTail(head,tail, 28);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    print(head);

    insertAtPosition(tail, head, 1, 17);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    insertAtPosition(tail, head, 4, 32);
    print(head);

cout<<"head"<<head->data<<endl;
cout<<"tail"<<tail->data<<endl;
    insertAtPosition(tail, head, 6, 45);
    print(head);
    
    deletionOfNode(1,head,tail);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deletionOfNode(5,head,tail);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deletionOfNode(3,head,tail);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    return 0;
}
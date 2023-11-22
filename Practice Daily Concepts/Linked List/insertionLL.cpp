#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Node(){
    //   this-> next = NULL;
    // };

    Node(int data)
    {
        this->data = data;
        // this->next  = NULL;
    }
};

int countlen(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void printLL(Node *Head)
{
    Node *temp = Head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

void insertathead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // newNode bnao
        Node *temp = new Node(data);
        // head ko point kr do
        head = temp;
        tail = temp;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertattail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // empty LL
        // newNode bnao
        Node *newNode = new Node(data);
        // update head and tail;
        head = newNode;
        tail = newNode;
    }
    else
    {
        // non-empty LL
        // Step A: newNode bnao
        Node *newNode = new Node(data);
        // Step B: update tail->next
        tail->next = newNode;
        // Step C: update tail
        tail = newNode;
    }
}

void insertatposition(Node *&head, Node *&tail, int data, int position)
{

    // create new node
    Node *newNode = new Node(data);
    int length = countlen(head);

    // case 1: if pos < 1
    if (position < 1 || position > length)
    {
        cout << "cannot insert";
        return;
    }
    // case 2: if pos = 1
    if (position == 1)
    {
        insertathead(head, tail, data);
    }
    // case 3: if pos == n
    else if (position == length)
    {
        insertattail(head, tail, data);
    }
    // case 4: in the middle
    else
    {
        // step 1: create node
        Node *prev = new Node(data);
        Node *curr = new Node(data);

        // step 2: traverse nodes
        prev = NULL;
        curr = head;
        while (position != 1)
        {
            prev = curr;
            curr = curr->next;
            position--;
        }

        // step 3: attact the nodes
        prev->next = newNode;
        newNode->next = curr;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertathead(head, tail, 10);
    insertathead(head, tail, 20);
    insertathead(head, tail, 30);
    insertattail(head, tail, 5);
    insertatposition(head, tail, 40, 4);
    // cout<<endl;
    printLL(head);

    // Node obj;
    // Head->data = first->data;
    // Node* first = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* fourth = new Node(40);

    // // head bna diya
    // Node* Head = first;
    // Node* tail = fourth;

    // // connect LL
    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // // fourth->next = NULL;
    // // call print fun
    // cout<<"after insertion:"<<endl;
    // // addathead(Head,tail, 5);
}
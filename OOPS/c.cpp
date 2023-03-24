#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Node {
    public:
        int data;
        Node *next;
        Node() {
            data = -1;
            next = NULL;
        }
        Node (int data) {
            this->data = data;
            this->next = NULL;
        }
};

class LinkedList {
    private:
        Node *head = new Node();
    public:
        ~LinkedList() {}
        void Insert(int data);
        void Display(int position);
};
 
void LinkedList::Insert(int data) {
    Node *newNode = new Node(data);
    if (head ==  NULL) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    return;
}

void LinkedList::Display(int p) {
    if (head == NULL) {
        return;
    }
    
    Node *temp = head;
    for (int i=0;i<p;i++) {
            temp = temp->next;
    }
    cout << temp->data << endl;
    return;
}

int main() {
    LinkedList list;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for (int i=0;i<n;i++) {
            int temp=0;
            cin >> temp;
            list.Insert(temp);
        }
        int p=0;
        cin >> p;
        p = n - p;
        list.Display(p);
    }
    return 0;
}
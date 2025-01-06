#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

class LinkedList {
    private:
        Node* head;
        Node* tail;
        int size;

    public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            this->head = newNode;
            this->tail = newNode;
            this->size = 1;
        }

        void printList() {
            Node* temp = head;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        void getHead() {
            cout << "Head: " << head->data << endl;
        }

        void getTail() {
            cout << "Tail: " << tail->data << endl;
        }

        void getSize() {
            cout << "Size: " << size << endl;
        }

        void append(int value) {

            Node* newNode = new Node(value);
            
            if (size == 0) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }

            size++;
        }
};

int main() {
    LinkedList* linkedList = new LinkedList(4);

    linkedList->printList();
    linkedList->append(5);
    linkedList->append(6);

    linkedList->printList();

    delete linkedList;
}
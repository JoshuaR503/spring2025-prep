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

        void prepend(int value) {
            Node* newNode = new Node(value);

            if (size == 0) {
                head = newNode;
                tail = newNode;
            } else {
                newNode->next = head;
                head = newNode;
            }

            size++;
        }

        void deleteLast() {
            if (size == 0) return;
            
            Node* temp = head;
            
            if (size == 1) {
                head = nullptr;
                tail = nullptr;
            } else {
                Node* pre = head;

                while (temp->next) {
                    pre = temp;
                    temp = temp->next;
                }

                tail = pre;
                tail->next = nullptr;
            }

            delete temp;
            size--;
        }

        void deleteFirst() {
            if (size == 0) return;

            Node* temp = head;

            if (size == 1) {
                head = nullptr;
                tail = nullptr;
            } else {
                head = head->next;
            }

            delete temp;
            size--;
        }

        void deleteNode() {
            if (size == 0) deleteFirst();
            

        }

        Node* get(int index) {
            if (index < 0 || index >= size) return nullptr;

            Node* temp = head;

            for (int i = 0; i < index; i++)
            {
                temp = temp->next;
            }

            return temp;
        }

        bool set(int index, int value) {
            Node* temp = get(index);

            if (temp) {
                temp->data = value;
                return true;
            }

            return false;
        }

        /**
         * Inserts a new node with the given value at the specified index in the linked list.
         *
         * @param index The position at which to insert the new node. Must be between 0 and size (inclusive).
         * @param value The value to be stored in the new node.
         * @return True if the insertion is successful, false if the index is out of bounds.
         *
         * The function performs the following steps:
         * - If the index is less than 0 or greater than or equal to the size of the list, it returns false.
         * - If the index is 0, it calls the prepend function to add the new node at the beginning of the list.
         * - If the index is equal to the size of the list, it calls the append function to add the new node at the end of the list.
         * - Otherwise, it creates a new node with the given value, finds the node currently at the specified index - 1,
         *   and inserts the new node after it by adjusting the next pointers.
         * - Increments the size of the list by 1.
         */
        bool instert(int index, int value) {
            if (index < 0 || index >= size) return false;

            if (index == 0) {
                prepend(value);
                return true;
            }

            if (index == size) {
                append(value);
                return true;
            }

            Node* newNode = new Node(value);
            Node* temp = get(index-1);

            newNode->next = temp->next;
            temp->next = newNode;
            size++;
            return true;
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
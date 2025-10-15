#include <iostream>

using namespace std;

// create a Node struct
struct Node {
    int data;
    Node* next;
};

// create a linked list
class LinkedList {
    private:
        Node* head;
        Node* tail;
    public:
        LinkedList() : head(nullptr), tail(nullptr) {}

        void insert_at_beginning(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = head;
            head = newNode;
            if (tail == nullptr) {
                tail = newNode;
            }
        }

        void insert_at_end(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = nullptr;
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        void insert_at_position(int data, int position) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = nullptr;
            if (position == 1) {
                newNode->next = head;
                head = newNode;
            } else {
                Node* current = head;
                for (int i = 1; i < position - 1; i++) {
                    current = current->next;
                }
                newNode->next = current->next;
                current->next = newNode;
            }
        }

        void delete_at_beginning() {
            if (head == nullptr) {
                return;
            }
            Node* temp = head;
            head = head->next;
            delete temp;
        }

        void delete_at_end() {
            if (head == nullptr) {
                return;
            }
            if (head->next == nullptr) {
                delete head;
                head = nullptr;
                tail = nullptr;
                return;
            }
            Node* current = head;
            while (current->next->next != nullptr) {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
            tail = current;
        }

        void delete_at_position(int position) {
            if (head == nullptr) {
                return;
            }
            if (position == 0) {
                delete_at_beginning();
                return;
            }
            Node* current = head;
            for (int i = 0; i < position - 1; i++) {
                current = current->next;
            }
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }

        void swap(int pos1, int pos2) {
            if (pos1 == pos2) {
                return;
            }
            Node* current1 = head;
            Node* current2 = head;
            for (int i = 0; i < pos1 - 1; i++) {
                current1 = current1->next;
            }
            for (int i = 0; i < pos2 - 1; i++) {
                current2 = current2->next;
            }
            int temp = current1->data;
            current1->data = current2->data;
            current2->data = temp;
        }

        void add(int data) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = nullptr;
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        void print() {
            Node* current = head;
            while (current != nullptr) {
                cout << current->data << " -> ";
                current = current->next;
            }
            cout << "nullptr\n" << endl;
        }
};

int main(void) {

    LinkedList list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);

    // add at beginning
    list.insert_at_beginning(5);
    list.print();
    // add at end
    list.insert_at_end(6);
    list.print();
    // add at position
    list.insert_at_position(7, 3);
    list.print();
    // delete at beginning
    list.delete_at_beginning();
    list.print();
    // delete at end
    list.delete_at_end();
    list.print();
    // delete at position
    list.delete_at_position(2);
    list.print();
    // swap
    list.swap(2, 3);

    // print
    list.print();
    return 0;
}


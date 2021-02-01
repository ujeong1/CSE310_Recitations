#include <iostream>

using namespace std;

class node {
public:
    int value;
    struct node *next;
};

node* conversion(node* cur){

    int i;
    for (i = 0; i < 10; i++) {
        cur->value = i;
        cur->next = new node();
        cur = cur->next;
    }

    return cur;
}

int main() {
    node *head = new node();
    node *cur = head;

    /* Will 10 classes linked by pointers be created?*/
    conversion(cur);

    /* Will this loop print "0123456789" ?*/
    while (head != NULL) {
        cout << head->value;
        head = head->next;
    }

    /* Will this deallocation work properly?*/
    delete head;
    delete cur;

    return 0;
}

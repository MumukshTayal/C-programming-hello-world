// Online C compiler to run C program online
#include <stdio.h>

struct Node {
    int val;
    struct Node *next;
};

int main() {
    struct Node a, b;
    
    a.val = 5;
    a.next = &b;
    b.val = 6;
    b.next = NULL;
    
    struct Node *head = &a;
    
    while(head != NULL) {
        printf("%d\n", head->val);
        head = head->next;
    }
    return 0;
}

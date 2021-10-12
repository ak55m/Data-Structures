// Homework 3, Akeem Mohammed
 
#include <bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node {
    int value;
    char value2; // For hexadecimal linked list
    struct Node* next;
};

// Function to push in values of the binary and octal converter
void push(struct Node** head_ref, int new_value)
{
    struct Node* new_node = new Node;
 
    new_node->value = new_value;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to delete the list after it has been converted
void deleteList(Node** head_ref){
    Node* current = *head_ref;
    Node* next = NULL;

    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }

    *head_ref = NULL;
}

 
// Function to reverse the link list for printing the values
Node *reverseList(Node* head)
{
    // Stack to store elements of list
    stack<Node *> stk;
 
    // Push the elements of list to stack
    Node* ptr = head;
    while (ptr->next != NULL) {
        stk.push(ptr);
        ptr = ptr->next;
    }
 
    head = ptr;
    while (!stk.empty()) {
        ptr->next = stk.top();
 
        ptr = ptr->next;
        stk.pop();
    }
     
    ptr->next = NULL;
     
    return head;
}
 
// Function to print the linked list of binary and octal
void printList(Node* head)
{
    while (head) {
        cout << head->value << " ";
        head = head->next;
    }
            cout << endl;

}

// Function to push hexadecimal conversion into linked list
void push2(struct Node** head_ref, char new_value)
{
    struct Node* new_node = new Node;
 
    new_node->value2 = new_value;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to print the linked list for hexadecimal
void printList2(Node* head)
{
    while (head) {
        cout << head->value2 << " ";
        head = head->next;
    }
            cout << endl;

}

 
// Driver Code
int main()
{
    // For empty list
    struct Node* head = NULL;
 
     int ch, val, data[100], i, j, k;

    do {
        cout<<"\t\t MENU" << endl;
        cout<<"Binary (0), Octal (1), Hexadecimal (2)" << endl;
        cout<<"Exit Program (3)"<<endl;
        cout<<"Choose? ";
        cin>>ch;
        switch(ch) {
            case 0: {
                cout<<"Enter value: ";
                cin>>val;

                // Converts to binary values
                for(i = 0; val > 0; i++){

                data[i] = val%2;

                val = val/2;

                }
                
                for(i=i-1; i>=0; i--){

                    push(&head, data[i]);

                }
                    
                head = reverseList(head);

                printList(head);
                deleteList(&head);

                break;
                }
            case 1: {
                cout<<"Enter value: ";
                cin>>val;

                // Converts to octal values
                for(i = 0; val > 0; i++){

                data[i] = val%8;

                val = val/8;

                }
                
                for(i=i-1; i>=0; i--){

                    push(&head, data[i]);

                }
                    
                head = reverseList(head);

                printList(head);
                deleteList(&head);

                break;
            }
            case 2: {
                char hex[100];

                cout<<"Enter value: ";
                cin>>val;

                // Converts to hexadecimal values
                k = 0;
                while(val != 0){
                    int temp = 0;
                    temp = val%16;

                    if(temp < 10){
                        hex[k] = temp + 48;
                        k++;
                    }
                    else {
                        hex[k] = temp + 55;
                        k++;
                    }

                    val = val/16;

                }
                
                for(j=k-1; j>=0; j--){

                    push2(&head, hex[j]);

                }
                    
                head = reverseList(head);

                printList2(head);
                deleteList(&head);

                break;
            }

        }
   }while(ch!=3);
 
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
 

// creating the node class for the linked list
class Node {

    public:
        // member data
        string value; // for data
        Node* next; // for pointer variable 
        Node* previous; // for second pointer variable

};

 
// insert head into single link list
void InsertHeadSingleLinkList(Node** head, string newValue)
{
    Node* newNode = new Node();
 
    newNode->value = newValue;
 
    newNode->next = (*head);
 
    (*head) = newNode;
}
 
 
// insert the tail into single link list
void InsertTailSingleLinkList(Node** head, string newValue)
{
    //  allocate node
    Node* newNode = new Node();
 
    Node *last = *head; 
 

    newNode->value = newValue;
 
    // This new node is going to be the last node, so make next of it as NULL
    newNode->next = NULL;
 
    // If the Linked List is empty make new node as head
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
 
    // Else traverse till the last node
    while (last->next != NULL)
        last = last->next;
 
    // Change the next of last node
    last->next = newNode;
    return;
}

// delete head from single linkvlist
void DeleteHeadSingleLinkList(Node* &head){

    // check if there is even a head
    if(head == NULL) {

        cout << "empty node, no node to delete" << endl;

        return;
    }

    Node* temp = head;

    // store the link of head in the variable head to show that that is the new head 
    head = head->next;

    // then delete the old head which is stored as temp
    delete temp;

    return;
}

// delete tail from single link list
void DeleteTailSingleLinkList(Node* &head){

    if(head == NULL) {

        cout << "empty node, no node to delete" << endl;

        return;
    }

    // check if the head is pointing to anything and if not delete it
    if(head->next == NULL) {

        // remove the head if the there is nothing the head link is pointing to
        delete(head);

        return;

    }

    Node* temp1 = head;

    Node* temp2 = NULL;


    while(temp1->next != NULL){

        temp2 = temp1;
        
        temp1 = temp1->next;

    }

    delete temp1;

    temp2->next = NULL;

    return;
    

}

// search and delete in single link list
void SearchandDeleteSingleLinkList(Node** head, string letters){

    Node* temp = *head;
    Node* prev = NULL;
     

    if (temp != NULL && temp->value == letters)
    {
        *head = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }
 

      else
    {
    while (temp != NULL && temp->value != letters)
    {
        prev = temp;
        temp = temp->next;
    }
 
    // If key was not present in linked list
    if (temp == NULL){

        cout <<"There was no value in the list found";

        return;
    }
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    // Free memory
    delete temp;
    }
}

// print the single link list
void PrintSingleLinkList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->value;
        node = node->next;
    }
}

// insert head into double link list
void InsertHeadDoubleLinkList(Node** head, string letters){

    Node* newNode = new Node();

    newNode->value = letters;

    newNode->next = (*head);

    newNode->previous = NULL;

    if((*head) != NULL){

        (*head)->previous = newNode;
    }
        (*head) = newNode;

}

// insert tail into double link list
void InsertTailDoubleLinkList(Node** head, string letters){

    Node* newNode = new Node();
 
    Node* last = *head; 
 
    newNode->value = letters;
 
    newNode->next = NULL;


    if (*head == NULL)
    {
        newNode->previous = NULL;
        *head = newNode;
        return;
    }
 
    while (last->next != NULL)
        last = last->next;
 
    last->next = newNode;
 
    newNode->previous = last;
 
    return;

}

// delete head from double link list
void DeleteHeadDobleLinkList(Node** head, Node* erase){

    // base case
    if (*head == NULL || erase == NULL) {
                
        cout << "There is no head node, the node is empty" << endl;

        return;
    }
 
    /* If node to be deleted is head node */
    if (*head == erase)
        *head = erase->next;
 
    // Change next only if node to be deleted is not the last node 
    if (erase->next != NULL)
        erase->next->previous = erase->previous;
 
    // Change prev only if node to be deleted is not the first node
    if (erase->previous != NULL)
        erase->previous->next = erase->next;
 
    // Finally, free the memory occupied by erase
    free(erase);
    return;
}

// delete tail from double link list
void DeleteTailDoubleLinkList(Node* &head){

    Node* temp1;

    if(head == NULL) {

        cout << "There is no head node, the node is empty" << endl;

        return;
    }else

    // check if the head is pointing to anything and if not delete it
    if(head->next == NULL) {

        // remove the head if the there is nothing the head link is pointing to
        delete(head);

        return;

    }
    else {

        temp1 = head; 

        while(temp1->next != NULL){

            temp1 = temp1->next; // store the variable in temporary

        }

        temp1->previous->next = NULL;

        free(temp1);

    }

}

// search and delete in double link list
void SearchandDeleteDoubleLinkList(Node** head, string letters){

    Node* temp = *head;

    Node* prev = NULL;
     
    if (temp != NULL && temp->value == letters)
    {
        *head = temp->next; // Changed head

        delete temp;            // free old head

        return;
    }
 

      else
    {
    while (temp != NULL && temp->value != letters)
    {
        prev = temp;

        temp = temp->next;
    }
 
    // If key was not present in linked list
    if (temp == NULL){

        cout <<"There was no value in the list found";

        return;
    }
 
    // Change next only if node to be deleted is not the last node 
    if (temp->next != NULL)
        temp->next->previous = temp->previous;
 
    // Change prev only if node to be deleted is not the first node
    if (temp->previous != NULL)
        temp->previous->next = temp->next;

 
    // Free memory
    delete temp;
    }

}

// print double link list
void PrintDoubleLinkList(Node* node){

    Node* last;

    cout<<"\nDoubly link list in forward direction " << endl;

    while (node != NULL)
    {
        cout<<" "<<node->value<<" ";

        last = node;

        node = node->next;
    }
 

}


// this is the code
int main()
{
    /* Start with the empty list */
    Node* head = NULL;
     
    int choice;

    string input; // to take input

    while (choice != 12) { 


        // this is the menu 
    cout << endl << "                     M E N U";

    cout << endl << "SLL: IH(0), IT(1), DH(2), DT(3), SD(4), PS(5)";

    cout << endl << "DLL: IH(6), IT(7), DH(8), DT(9) SD(10), PD(11)";

    cout << endl << "Exit Program (12)";

    cout << endl << "Choose ? ";   

    cin >> choice;

    switch(choice){
        case 0:
            cout << "Please enter letter you want to insert: ";
            cin >> input;
            InsertHeadSingleLinkList(&head, input); // input 
        break;
        case 1:
            cout << "Please enter letter you want to insert: ";
            cin >> input;
            InsertTailSingleLinkList(&head, input); // input
        break;
        case 2:
            DeleteHeadSingleLinkList(head); // delete head
        break;
        case 3:
            DeleteTailSingleLinkList(head); // delete tail
        break;
        case 4:
            cout << "Please enter letter you want to delete: ";
            cin >> input;
            SearchandDeleteSingleLinkList(&head, input); // search and delete input
            break;
        case 5:
            PrintSingleLinkList(head); // print
        break;
        case 6:
            cout << "Please enter letter you want to insert: ";
            cin >> input;
            InsertHeadDoubleLinkList(&head, input); // input
        break;
        case 7:
            cout << "Please enter letter you want to insert: ";
            cin >> input;
            InsertTailDoubleLinkList(&head, input); // input
        break;
        case 8:
            DeleteHeadDobleLinkList(&head, head); // delete head
        break;
        case 9:
            DeleteTailDoubleLinkList(head); // delete tail
        break;
        case 10:
            cout << "Please enter letter you want to delete: ";
            cin >> input;
            SearchandDeleteDoubleLinkList(&head, input); // search and delete input
        break;
        case 11:
            PrintDoubleLinkList(head); // print double linked list
        break;

    }

    }
     
    return 0;
}

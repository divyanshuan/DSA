#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void add(struct Node **head, int node_data)
{

    struct Node *newNode = new Node;
    newNode->data = node_data;
    newNode->next = (*head);
    (*head) = newNode;
}
void addatbeg(struct Node **head)
{
    int node_data;
    cout << "ENTER THE DATA YOU WANT TO ADD AT BEGNING  " << endl;
    cin >> node_data;
    struct Node *newNode = new Node;
    newNode->data = node_data;
    newNode->next = (*head);
    (*head) = newNode;
}
void insertAfter(struct Node *prev_node)
{
    int node_data;
    cout << "ENTER THE DATA YOU WANT TO ADD IN BETWEEN " << endl;
    cin >> node_data;
    if (prev_node == NULL)
    {
        cout << "THE PREVIOUS NODE IS NULL";
        return;
    }
    struct Node *newNode = new Node;
    newNode->data = node_data;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}
void addatend(struct Node **head)
{
    int node_data;
    cout << "ENTER THE DATA YOU WANT TO ADD IN THE END " << endl;
    cin >> node_data;
    struct Node *newNode = new Node;
    struct Node *last = *head;
    newNode->data = node_data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = newNode;
    return;
}
void deleteNode(struct Node **head_ref)
{
    struct Node *temp = *head_ref, *prev;
    int key;
    cout << "ENTER THE DATA YOU WANT TO DELETE" << endl;
    cin >> key;
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;
    free(temp);
}
void reverse(struct Node **head_ref)
{
    struct Node *temp = NULL;
    struct Node *prev = NULL;
    struct Node *current = (*head_ref);
    while (current != NULL)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}
void updatedata(struct Node **head_ref)
{
    struct Node *temp = *head_ref;
    int key, upd;
    cout << "ENTER THE DATA YOU WANT TO UPDATE " << endl;
    cin >> key;
    cout << "ENTER THE UPTADED DATA " << endl;
    cin >> upd;
    while (temp != NULL)
    {
        if (temp != NULL && temp->data == key)
        {
            temp->data = upd;
            return;
        }
        temp = temp->next;
    }
}
void printll(struct Node *node)
{
    while (node != NULL)
    {
        cout << node->data << "-->";
        node = node->next;
    }

    if (node == NULL)
        cout << "null";
}
int main()
{
    struct Node *head = NULL;
    int option;
    add(&head, 20);
    add(&head, 30);
    add(&head, 40);
    cout << "INITIAL LINKED LIST\n " << endl;
    printll(head);
    cout << "" << endl;
    cout << "" << endl;
    cout << "CHOOSE ANY OF THE FOLLOWING " << endl;
    cout << "1. ADD ELEMENT AT BEGINING OF THE LINKED LIST" << endl;
    cout << "2. ADD ELEMENT IN BETWEEN OF THE LINKED LIST" << endl;
    cout << "3. ADD ELEMENT AT LAST OF THE LINKED LIST " << endl;
    cout << "4. DELETE ELEMENT  OF THE LINKED LIST " << endl;
    cout << "5. REVERSE THE LINKED LIST " << endl;
    cout << "6. UPDATE THE LINKED LIST " << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        addatbeg(&head);
        break;
    case 2:
        insertAfter(head->next);
        break;
    case 3:
        addatend(&head);
        break;
    case 4:
        deleteNode(&head);
        break;
    case 5:
        reverse(&head);
        break;
    case 6:
        updatedata(&head);
        break;
    default:
    cout<<"NONE OF THE ABOVE IS SELECTED "<<endl;
        break;
    }
    cout<< "\nFINAL LINKED LIST" << endl;
    printll(head);

    return 0;
}
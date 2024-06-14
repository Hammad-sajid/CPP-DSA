#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
} *head = NULL;
void insert_beg()
{
    Node *ptr;
    ptr = new Node;
    int ele;
    if (ptr == NULL)
    {
        cout << "overflow" << endl;
    }
    else
    {
        cout << "enter  no to insert" << endl;
        cin >> ele;
        ptr.data = ele;
        ptr->next = head;
        head = ptr;
        cout << "node inserted" << endl;
    }
}
void insert_last()
{
    Node *ptr, *temp;
    ptr = new Node;
    int ele;
    if (ptr == NULL)
    {
        cout << "overflow" << endl;
    }
    else
    {
        cout << "enter  no to insert" << endl;
        cin >> ele;
        ptr->data = ele;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            cout << "node inserted" << endl;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            cout << "node inserted" << endl;
        }
    }
}
void insert_random()
{
    int i, loc, item;
    Node *ptr, *temp;
    ptr = new Node;
    if (ptr == NULL)
    {
        cout << "OVERFLOW" << endl;
    }
    else
    {
    label:
        cout << "insertion at random location" << endl;
        cout << "Enter element value" << endl;
        cin >> item;
        ptr->data = item;
        cout << "Enter the location after which you want to insert " << endl;
        cin >> loc;
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "can't insert" << endl;
                goto label;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        cout << "Node inserted" << endl;
    }
}
void show()
{
    Node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "Nothing to print" << endl;
    }
    else
    {
        cout << "printing values . . . . ." << endl;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
}
int main()
{
    insert_beg();
    insert_last();
    insert_random();
    show();

    return 0;
}
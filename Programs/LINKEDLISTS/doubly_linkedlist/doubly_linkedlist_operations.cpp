#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
}*head = NULL;

void insert_beg();
void insert_last();
void insert_random();
void del_beg();
void del_last();
void del_random();
void show();
void search();
// main of function
int main()
{
    int choice = 0;
    while (choice != 9)
    {
        cout << "*********Main Menu*********" << endl;
        cout << "Choose one option from the following list ..." << endl;
        cout << "1.Insert in begining" << endl;
        cout << "2.Insert at last" << endl;
        cout << "3.Insert at any random location" << endl;
        cout << "4.Delete from Beginning" << endl;
        cout << "5.Delete from last" << endl;
        cout << "6.Delete the node after the given data" << endl;
        cout << "7.Search" << endl;
        cout << "8.Show" << endl;
        cout << "9.Exit" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_last();
            break;
        case 3:
            insert_random();
            break;
        case 4:
            del_beg();
            break;
        case 5:
            del_last();
            break;
        case 6:
            del_random();
            break;
        case 7:
            search();
            break;
        case 8:
            show();
            break;
        case 9:
            exit(0);
            break;
        default:
            cout << "Please enter valid choice.." << endl;
        }
    }
    return 0;
}
void insert_beg()
{
    Node *ptr;
    int item;
    ptr = new Node;
    if (ptr == NULL)
    {
        cout << "OVERFLOW" << endl;
    }
    else
    {
        cout << "Enter Item value" << endl;
        cin >> item;

        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        else
        {
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
        cout << "Node inserted" << endl;
    }
}
void insert_last()
{
    Node *ptr, *temp;
    int item;
    ptr = new Node;
    if (ptr == NULL)
    {
        cout << "OVERFLOW" << endl;
    }
    else
    {
        cout << "Enter value" << endl;
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
        }
    }
    cout << "node inserted" << endl;
}
void insert_random()
{
    Node *ptr, *temp;
    int item, loc, i;
    ptr = new Node;
    if (ptr == NULL)
    {
        cout << " OVERFLOW " << endl;
    }
    else
    {
        temp = head;
        cout << "Enter the location" << endl;
        cin >> loc;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << " There are less  elements" << loc << endl;
                return;
            }
        }
        cout << "Enter value" << endl;
        cin >> item;
        ptr->data = item;
        ptr->next = temp->next;
        ptr->prev = temp;
        temp->next = ptr;
        temp->next->prev = ptr;
        cout << "node inserted" << endl;
    }
}
void del_beg()
{
    Node *ptr;
    if (head == NULL)
    {
        cout << "UNDERFLOW " << endl;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        delete (head);
        cout << "node deleted" << endl;
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        delete (ptr);
        cout << "node deleted" << endl;
    }
}
void del_last()
{
    Node *ptr;
    if (head == NULL)
    {
        cout << "UNDERFLOW" << endl;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        delete (head);
        cout << " node deleted " << endl;
    }
    else
    {
        ptr = head;
        if (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        delete (ptr);
        cout << "node deleted" << endl;
    }
}
void del_random()
{
    Node *ptr, *temp;
    int item;
    cout << " Enter the data after which the node is to be deleted :" << endl;
    cin >> item;
    ptr = head;
    while (ptr->data != item)
        ptr = ptr->next;
    if (ptr->next == NULL)
    {
        cout << "Can't delete" << endl;
    }
    else if (ptr->next->next == NULL)
    {
        ptr->next = NULL;
    }
    else
    {
        temp = ptr->next;
        ptr->next = temp->next;
        temp->next->prev = ptr;
        delete (temp);
        cout << "node deleted" << endl;
    }
}
void show()
{
    Node *ptr;
    cout << " printing values..." << endl;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
void search()
{
    Node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "Empty List" << endl;
    }
    else
    {
        cout << "Enter item which you want to search" << endl;
        cin >> item;
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                cout << "item found at location" << i + 1 << endl;
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            cout << "Item not found" << endl;
        }
    }
}
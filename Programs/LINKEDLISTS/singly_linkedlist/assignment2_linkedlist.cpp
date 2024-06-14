#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insert_beg();
void insert_last();
void insert_random();
void search();
void show();
node *head;

// main function
int main()
{
    int choice = 0;
label:
    while (choice != 6)
    {

        cout << "-----------------------main menu----------------------" << endl;
        cout << "1.insert_beg" << endl
             << "2.insert_last" << endl
             << "3.insert_random" << endl
             << "4.search" << endl
             << "5.show" << endl
             << "6.exit" << endl;
        cout << "enter choice" << endl;
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
            search();
            break;
        case 5:
            show();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "wrong choice" << endl;
            goto label;
        }
    }
    return 0;
}
// operations
void insert_beg()
{
    node *ptr;
    ptr = new node;
    int item;
    if (ptr == NULL)
    {
        cout << "overflow" << endl;
    }
    else
    {
        cout << "insertion at beginning location" << endl;
        cout << "enter value" << endl;
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout << "Node inserted" << endl;
    }
}
void insert_last()

{
    node *ptr, *temp;
    int item;
    ptr = new node;
    if (ptr == NULL)
    {
        cout << "OVERFLOW" << endl;
    }
    else
    {
        cout << "insertion at last location" << endl;
        cout << "Enter value" << endl;
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            cout << "Node inserted" << endl;
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
            cout << "Node inserted" << endl;
        }
    }
}
void insert_random()
{
    int i, loc, item;
    node *ptr, *temp;
    ptr = new node;
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
void search()
{
    node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "Empty List" << endl;
    }
    else
    {
        cout << "Enter item which you want to search?" << endl;
        cin >> item;
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                cout << "item found at location " << i + 1 << endl;
                flag = 0;
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
void show()
{
    node *ptr;
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
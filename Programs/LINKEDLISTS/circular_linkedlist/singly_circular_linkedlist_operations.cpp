#include<iostream>  
using namespace std;
struct Node   
{  
    int data;  
    Node *next;   
}*head ;    
void insert_beg ();   
void insert_last ();    
void del_begin();  
void del_last();  
void show();  
void search();  
int  main ()  
{  
    int choice =0;  
    while(choice != 7)   
    {  
        cout<<"*********Main Menu*********"<<endl;  
        cout<<"Choose one option from the following list ..."<<endl;  
        cout<<"1.Insert in begining"<<endl;
        cout<<"2.Insert at last"<<endl;
        cout<<"3.Delete from Beginning"<<endl;
        cout<<"4.Delete from last"<<endl;
        cout<<"5.Search for an element"<<endl;
        cout<<"6.Show"<<endl;
        cout<<"7.Exit"<<endl;  
        cout<<"Enter your choice"<<endl;         
        cin>>choice;  
        switch(choice)  
        {  
            case 1:  
            insert_beg();      
            break;  
            case 2:  
            insert_last();         
            break;  
            case 3:  
            del_begin();       
            break;  
            case 4:  
            del_last();        
            break;  
            case 5:  
            search();         
            break;  
            case 6:  
            show();        
            break;  
            case 7:  
            exit(0);  
            break;  
            default:  
            cout<<"Please enter valid choice.."<<endl;  
        }  
    }  
    return 0;
}  
void insert_beg()  
{  
    Node *ptr,*temp;   
    int item;   
    ptr = new Node;  
    if(ptr == NULL)  
    {  
        cout<<"OVERFLOW"<<endl;  
    }  
    else   
    {  
        cout<<"Enter the node data"<<endl;  
        cin>>item;  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        cout<<"node inserted"<<endl;  
    }  
              
}  
void insert_last()  
{  
    Node *ptr,*temp;   
    int item;  
    ptr = new Node;  
    if(ptr == NULL)  
    {  
        cout<<"OVERFLOW"<<endl;  
    }  
    else  
    {  
        cout<<"Enter Data"<<endl;  
        cin>>item;  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        cout<<"node inserted"<<endl;  
    }  
  
}  
void del_begin()  
{  
    Node *ptr;   
    if(head == NULL)  
    {  
        cout<<"UNDERFLOW"<<endl;    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        delete(head);  
        cout<<"node deleted"<<endl;  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        delete(head);  
        head = ptr->next;  
        cout<<"node deleted"<<endl;  
  
    }  
}  
void del_last()  
{  
    Node *ptr, *temp;  
    if(head==NULL)  
    {  
        cout<<"UNDERFLOW"<<endl;  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        delete(head);  
        cout<<"node deleted"<<endl;  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            temp=ptr;  
            ptr = ptr->next;  
        }  
        temp->next = ptr -> next;  
        delete(ptr);  
        cout<<"node deleted"<<endl;  
  
    }  
}  
  
void search()  
{  
    Node *ptr;  
    int item,i=0,flag=1;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        cout<<"Empty List"<<endl;  
    }  
    else  
    {   
        cout<<"Enter item which you want to search"<<endl;   
        cin>>item;  
        if(head ->data == item)  
        {  
        cout<<"item found at location "<<i+1<<endl;  
        flag=0;  
        }  
        else   
        {  
        while (ptr->next != head)  
        {  
            if(ptr->data == item)  
            {  
                cout<<"item found at location "<<i+1<<endl;  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        }  
        if(flag != 0)  
        {  
            cout<<"Item not found"<<endl;  
        }  
    }     
          
}  
  
void show()  
{  
    Node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        cout<<"nnothing to print"<<endl;  
    }     
    else  
    {  
        cout<<"printing values ... "<<endl;  
          
        while(ptr -> next != head)  
        {  
          
            cout<< ptr -> data<<" ";  
            ptr = ptr -> next;  
        }  
        cout<<ptr -> data<<" ";  
    }  
     cout<<endl;         
}  
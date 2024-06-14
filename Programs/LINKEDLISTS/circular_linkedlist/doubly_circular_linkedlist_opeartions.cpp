#include<iostream>  
using namespace std; 
struct Node  
{  
    int data; 
     Node *prev;  
     Node *next;  
     
}*head ;  
  
void insert_beg();  
void insert_last();  
void del_beg();  
void del_last(); 
void search(); 
void show();  
  
int  main ()  
{  
    int choice =0;  
    while(choice != 7)  
    {  
        cout<<"*********Main Menu*********"<<endl;  
        cout<<"Choose one option from the following list ..."<<endl;
        cout<<"1.Insert in Beginning"<<endl;
        cout<<"2.Insert at last"<<endl;
        cout<<"3.Delete from Beginning"<<endl;
        cout<<"4.Delete from last"<<endl;
        cout<<"5.Search"<<endl;
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
            del_beg();  
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
            printf("Please enter valid choice..");  
        }  
    }  
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
   cout<<"Enter Item value"<<endl;  
    cin>>item;  
    ptr->data=item;  
   if(head==NULL)  
   {  
      head = ptr;  
      ptr -> next = head;   
      ptr -> prev = head;   
   }  
   else   
   {  
       temp = head;   
    while(temp -> next != head)  
    {  
        temp = temp -> next;   
    }  
    temp -> next = ptr;  
    ptr -> prev = temp;  
    head -> prev = ptr;  
    ptr -> next = head;  
    head = ptr;  
   }  
   cout<<"Node inserted"<<endl;  
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
       cout<<"Enter value"<<endl;  
       cin>>item;  
        ptr->data=item;  
       if(head == NULL)  
       {  
           head = ptr;  
           ptr -> next = head;   
           ptr -> prev = head;   
       }  
       else  
       {  
          temp = head;  
          while(temp->next !=head)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          head -> prev = ptr;  
          ptr -> next = head;  
        }  
   }  
     cout<<"node inserted"<<endl;  
}  
void del_beg()  
{  
    Node *temp;  
    if(head == NULL)  
    {  
        cout<<" UNDERFLOW"<<endl;  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        delete(head);  
        cout<<"node deleted"<<endl;  
    }  
    else  
    {  
        temp = head;   
        while(temp -> next != head)  
        {  
            temp = temp -> next;  
        }  
        temp -> next = head -> next;  
        head -> next -> prev = temp;  
        delete(head);  
        head = temp -> next;  
    }  
  
}  
void del_last()  
{  
    Node *ptr;  
    if(head == NULL)  
    {  
        cout<<" UNDERFLOW"<<endl;  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        delete(head);   
        cout<<"node deleted"<<endl;  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != head)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = head;  
        head -> prev = ptr -> prev;    
        delete(ptr);  
        cout<<"node deleted"<<endl;  
    }  
}  
void show()  
{  
    Node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        cout<<"nothing to print"<<endl;  
    }     
    else  
    {  
        cout<<"printing values ... "<<endl;  
          
        while(ptr -> next != head)  
        {  
          
           cout<< ptr -> data<<" ";  
            ptr = ptr -> next;  
        }  
       cout<< ptr -> data;  
    }  
         cout<<endl;     
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
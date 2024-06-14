#include<iostream>
using namespace std;
struct Node   
{  
    int data;   
    Node *next;  
}*front,*rear;
   
void insert();  
void remove();  
void display();
int main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        cout<<"*************************Main Menu*****************************"<<endl;  
        cout<<"================================================================="<<endl;  
        cout<<"1.insert an element"<<endl;
        cout<<"2.Delete an element"<<endl;
        cout<<"3.Display the queue"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice"<<endl;  
        cin>>choice;  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            remove();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            cout<<"Enter valid choice"<<endl;  
        }  
    }  
}  
void insert()  
{  
    Node *ptr;  
    int item;   
      
    ptr = new Node;  
    if(ptr == NULL)  
    {  
        cout<<"OVERFLOW"<<endl;  
        return;  
    }  
    else  
    {   
        cout<<"Enter value"<<endl;  
        cin>>item;  
        ptr-> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}     
void remove ()  
{  
    Node *ptr;  
    if(front == NULL)  
    {  
        cout<<"UNDERFLOW"<<endl;  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> next;  
        delete(ptr);  
    }  
}  
void display()  
{  
    Node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        cout<<"Empty queue"<<endl;  
    }  
    else  
    {   cout<<"printing values ....."<<endl;  
        while(ptr != NULL)   
        {  
            cout<<ptr -> data<<" ";  
            ptr = ptr -> next;  
        }  
    }  
}  
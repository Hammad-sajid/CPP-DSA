#include <iostream>  
using namespace std; 
void push();  
void pop();  
void display();  
struct Node   
{  
int value;  
Node *next;  
}*head;   
int main ()  
{  
    int choice=0;     
    cout<<"*********Stack operations using linked list*********"<<endl;  
    cout<<"----------------------------------------------"<<endl;  
    while(choice !=4)
    {  
        cout<<"Chose one from the below options..."<<endl;  
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Show"<<endl;
        cout<<"4.Exit"<<endl;  
        cout<<"Enter your choice "<<endl;        
        cin>>choice;  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                cout<<"Exiting...."<<endl;  
                break;   
            }  
            default:  
            {  
                cout<<"Please Enter valid choice "<<endl;  
            }   
    };  
} 
return 0; 
}  
void push ()  
{  
    int value;  
   Node *ptr = new Node;   
    if(ptr == NULL)  
    {  
       cout<<"not able to push the element"<<endl;   
    }  
    else   
    {  
        cout<<"Enter the value"<<endl;  
        cin>>value;  
        if(head==NULL)  
        {         
            ptr->value = value;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->value = value;  
            ptr->next = head;  
            head=ptr;  
               
        }  
        cout<<"Item pushed"<<endl;  
          
    }  
}  
  
void pop()  
{  
    int item;  
    Node *ptr;  
    if (head == NULL)  
    {  
        cout<<"Underflow"<<endl;  
    }  
    else  
    {  
         head->value=item ;  
        ptr = head;  
        head = head->next;  
        delete(ptr);  
        cout<<"Item popped"<<endl;  
          
    }  
}  
void display()  
{  
    int i;  
    Node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        cout<<"Stack is empty"<<endl;  
    }  
    else  
    {  
       cout<<"Printing Stack elements "<<endl;  
        while(ptr!=NULL)  
        {  
            cout<<ptr->value<<" ";  
            ptr = ptr->next;  
        }  
    }  
    cout<<endl;
}   
 
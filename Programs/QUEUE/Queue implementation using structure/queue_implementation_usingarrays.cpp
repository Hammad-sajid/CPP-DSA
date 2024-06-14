#include<iostream>
using namespace std;
#define maxsize 5 
void insert();  
void remove();  
void display();  
int front = -1, rear = -1;  
int queue[maxsize];  
int  main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        cout<<"*************************Main Menu***********************"<<endl;  
        cout<<"================================================================"<<endl;  
        cout<<"1.insert an element"<<endl;
        cout<<"2.Delete an element"<<endl;
        cout<<"3.Display the queue"<<endl;
        cout<<"4.Exit"<<endl;  
        cout<<"Enter your choice "<<endl;  
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
    return 0;
}  
void insert()  
{  
    int item;  
    cout<<"Enter the element"<<endl;  
    cin>>item;      
    if(rear == maxsize-1)  
    {  
        cout<<"OVERFLOW"<<endl;  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    cout<<"Value inserted "<<endl;  
      
}  
void remove()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        cout<<"UNDERFLOW"<<endl;  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        cout<<"value deleted "<<endl;  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        cout<<"Empty queue"<<endl;  
    }  
    else  
    {   cout<<"printing values ....."<<endl;  
        for(i=front;i<=rear;i++)  
        {  
            cout<<queue[i]<<" ";  
        }     
    }  
    cout<<endl;
}  
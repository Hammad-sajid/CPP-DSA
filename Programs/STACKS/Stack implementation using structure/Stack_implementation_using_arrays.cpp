#include <iostream>  
//#include <stack> 
using namespace std;
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  
int  main ()  
{  
      
   cout<<"Enter the number of elements in the stack "<<endl;   
    cin>>n;  
    cout<<"*********Stack operations using array*********"<<endl;  
  
cout<<"----------------------------------------------"<<endl;  
    while(choice != 4)  
    {  
        cout<<"Chose one from the below options"<<endl;  
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Show"<<endl;
        cout<<"4.Exit"<<endl;  
        cout<<" Enter your choice "<<endl;        
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
                show();  
                break;  
            }  
            case 4:   
            {  
                cout<<"Exiting...."<<endl;  
                break;   
            }  
            default:  
            {  
                cout<<"Please Enter valid choice ";  
            }   
        };  
    }  
    return 0;
}   
  
void push ()  
{  
    int value;      
    if (top == n )   
    cout<<"Overflow"<<endl;   
    else   
    {  
        cout<<"Enter the value"<<endl;  
        cin>>value;         
        top = top +1;   
        stack[top] = value;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    cout<<"Underflow"<<endl;  
    else  
    top = top -1;   
}   
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        cout<<stack[i]<<" ";  
    }  
    if(top == -1)   
    {  
        cout<<"Stack is empty"<<endl;  
    }  
    cout<<endl;
}  
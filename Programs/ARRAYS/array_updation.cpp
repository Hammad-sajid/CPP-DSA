#include<iostream>
using namespace std;
int main()
{
    int arr_int[5]={22,33,44,55,66};
    int i,arr_len,pos,ele_replace;
    arr_len=5;
    for(i=0;i<arr_len;i++)
    {
        cout<<arr_int[i]<<" ";
    }
    cout<<endl;
    cout<<"enter position n which you want to replace"<<endl;
    cin>>pos;
    cout<<"enter no you want to add"<<endl;
    cin>>ele_replace;
    arr_int[pos-1]=ele_replace;
    //now showing array data after updation
    for(i=0;i<arr_len;i++)
    {
        cout<<arr_int[i]<<" ";
    }

    return 0;
}
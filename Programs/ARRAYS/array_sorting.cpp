#include<iostream>
using namespace std;
int main()
{
  int arr_int[5];
  int i,arr_len=5,temp=0;
  cout<<"enter element of array integer"<<endl;
  for(i=0;i<arr_len;i++)
  {
    cin>>arr_int[i];
  }
  cout<<"showing element before sorting"<<endl;
   for(i=0;i<arr_len;i++)
  {
    cout<<arr_int[i]<<" ";
  }
  cout<<endl;
  cout<<"showing elements after sorting"<<endl;
   for(i=0;i<arr_len;i++)
 {
        for (int j = i+1; j < arr_len; j++)
         {   
           if(arr_int[i] > arr_int[j]) 
           {  
               temp = arr_int[i];  
               arr_int[i] = arr_int[j];  
               arr_int[j] = temp;  
               }
         }
 }
 for(i=0;i<arr_len;i++)
 {
    cout<<arr_int[i]<<" ";
 }
 
return 0;
}
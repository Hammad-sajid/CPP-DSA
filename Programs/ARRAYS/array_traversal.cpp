#include<iostream>
using namespace std;
int main()
{ 
  
 int array1[5]={22,34,43,23,41};
 cout<<"showing data of array"<<endl;
 for(int i=0;i<5;i++)
 {
    cout<<"array"<<"["<<i<<"]"<<"="<<array1[i]<<" ";
 }
 cout<<endl;
int arrSize = sizeof(array1[5]);
cout << "The length of the array is: " << arrSize;

    return 0;
}
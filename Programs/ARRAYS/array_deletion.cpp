#include<iostream>
using namespace std;
int main()
{ 
    string arr_name[5]={"ali","ahmed","khan","umair","khizar"};
    int i,j,arr_len;
    arr_len=5;
    int found=0;
     string ele_del;
    cout<<"showing array data before deletion"<<endl;
    for(i=0;i<arr_len;i++)
    {
        cout<<arr_name[i]<<" ";
    }

    cout<<endl;
    cout<<"enter no you want to delete"<<endl;
    getline(cin,ele_del);
    for(i=0;i<arr_len;i++)
    {
        if (arr_name[i]==ele_del )
        {
            
            for( j=i; j<(arr_len-1); j++)
            {
            arr_name[j] = arr_name[j+1];
            found++;
            }
            arr_len--;
        }
    }
    if(found==0)
    cout<<"element not found"<<endl;
    else
    {
    cout<<"array after deletion"<<endl;
    for(i=0;i<arr_len;i++)
    {
        cout<<arr_name[i]<<" ";
    }
    }
    return 0;

}
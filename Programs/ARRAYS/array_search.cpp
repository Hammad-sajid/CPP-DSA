#include <iostream>
using namespace std;
int main()
{
    int arr_int[5];
    int i, ele_find, found, arr_len;
    found=0;
    arr_len = 5;
    cout<<"enter element of array"<<endl;
    for (i=0; i<arr_len; i++)
    {
        cin >> arr_int[i];
    }
    for (i = 0; i < arr_len; i++)
    {
        cout << arr_int[i] << " ";
    }
    // now searching
    cout<<endl;
    cout<<"enter the no you want to find"<<endl;
    cin>>ele_find;
    for (i = 0; i < arr_len; i++)
    {
        if (arr_int[i] == ele_find)
        {
            found = arr_int[i];
            
        }
    }
    if (found!=NULL)
    {
        cout << "the element you wanted is found" << endl;
        cout << found;
    }
    else
        cout << "element you wanted is not found" << endl;
    return 0;
}
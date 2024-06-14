#include <iostream>
using namespace std;
int main()
{
    int array_int[10] = {22, 43, 23, 53, 11};
    int pos, no_insert, arr_len, i;
    arr_len = 5;
    cout << "showing array before insertion" << endl;
    for (i = 0; i < arr_len; i++)
    {
        cout << array_int[i] << " ";
    }
    // now insertion
    arr_len++;
    cout << endl;
    cout << "enter position you want to enter data" << endl;
    cin >> pos;
    cout << "enter no you want to insert" << endl;
    cin >> no_insert;
    for (i = arr_len - 1; i >= pos; i--)
        array_int[i] = array_int[i - 1];
    array_int[pos - 1] = no_insert;
    cout << "showing array after insertion " << endl;
    for (i = 0; i < arr_len; i++)
    {
        cout << array_int[i] << " ";
    }
    return 0;
}
//Insertion at the Start of the array 
#include<iostream>
using namespace std;
int main()
{
    int arr[15],size,num;
    cout<<"Enter the size of arrays : ";
    cin>>size;
    cout<<"Enter "<<size<<" Elements : ";
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"Displaying the array : "<<endl;
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the number to be inserted at the beginning : ";
    cin>>num;
    for (size_t i = size; i >= 1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=num;
    size++;
    cout<<"The array elements are : ";
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
    return 0;
}
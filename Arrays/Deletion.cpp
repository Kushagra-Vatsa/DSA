#include<iostream>
using namespace std;
int main()
{
    int arr[15],size,pos;
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
    cout<<"Enter the position to be deleted : ";
    cin>>pos;
    if (pos==0 || pos<0)
    {
        cout<<"Invalid position ";
        return 1;
    }
    
    for (size_t i = pos-1; i < size-1; i++)
    {
        /* code */
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"Displaying the array : "<<endl;
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<endl;
    }
    return 0;
}
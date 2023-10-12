//Traversal - Visiting every element of array exactly once
#include<iostream>
using namespace std;
int main()
{
    int array[10],size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the elements of the arrays "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"The elements of arrays are "<<endl;
    for (size_t i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
}
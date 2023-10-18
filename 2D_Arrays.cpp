#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    /*
    int arr[2][3]={{1,2,3},{4,5,6}};
    int arr[][3]={1,2,3,4,5,6};
    int arr[2][]={1,2,3,4,5,6};//This will give error as column number must be given 
    */
    
    //How to initialize at run time 
    int arr[2][3];
    cout<<"Enter the elements : "<<endl;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Displaying the elements of the 2D array : "<<endl;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<endl;
        }
        
    }
    return 0;
}
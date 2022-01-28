//insert array at the given position

#include<iostream>
using namespace std;


int insert(int arr[],int size,int element,int cap,int pos)
{
    if(size==cap)
    {
        return size;
    }
    int index=pos-1;
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];

    }

    arr[index] =element;
    return (size+1);
}

int main()
{
    int arr[10];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<8;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<8;i++)
    {
        cout<<arr[i];
    }

    int output=insert(arr,8,100,10,4);
    cout<<""<<endl;
    cout<<output;

    
}
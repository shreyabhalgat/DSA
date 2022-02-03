#include<iostream>
#include<array>
using namespace std;

int main()
{
    //normal array
    int a[4]={1,2,3,4};

    //stl array

    //syntax of the STL array
    //data structure <data type,size of array> name of array
    array<int,4>arr={1,2,3,4};

    //to get the size of the array 

    int size= arr.size();

    //to print the stl array

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"element at second index"<<arr.at(2)<<endl;

    cout<<"empty or not"<<arr.empty()<<endl;

    cout<<"first element"<<arr.front()<<endl;
    cout<<"last element"<<arr.back();


}
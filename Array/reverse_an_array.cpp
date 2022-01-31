#include <iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int low=0;
    int high=size-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low=low+1;
        high=high-1;
    }
    
    for(int i = 0; i< size; i++){
        cout << arr[i] << " ";
    }cout <<endl;
 
}

int main() {
	int t;
 
 cin >>t;
 while(t--){
     int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    reverse(arr,n);
    
 }
	return 0;
}
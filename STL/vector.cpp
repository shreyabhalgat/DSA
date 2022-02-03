#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    //vector<int>a(4,1);
    //above syantax basically indicates that you have declared the vector of the size 4 and intialized all the elements as 1 if you want it's okay not to intialize by default all the elements are initialized as 0
    
    cout<<"size of the vector "<<v.capacity();

    v.push_back(1);
    cout<<"size of the vector "<<v.capacity();
 v.push_back(2);
 cout<<"size of the vector "<<v.capacity();
  v.push_back(3);
  cout<<"size of the vector "<<v.capacity();
  //vector got double here
  //first capacity was 2 but when you tried to insert 3rd element in the vector of size 3 it got doubled

  //size is no of elements stored in the vector array and capacity is the total number of blocks of memory

//pop function

//printing an array before pop operation

cout<<"before pop"<<endl;

    for(int i:v)
    {
        cout<<i<<"";
    }

    cout<<endl<<"";

    //printing elements after pop

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v)
    {
        cout<<i<<"";
    }


    //when you performed the vector clear opertion the size of the vector get's zero but it do not effect the capacity of the vector

    cout<<"before clear"<<v.size()<<endl;
    v.clear();
    cout<<"after clear"<<v.size()<<endl;

}
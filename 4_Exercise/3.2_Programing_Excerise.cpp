//3.2 Write a function that creates a vector of user-given size M using new operator.
#include<iostream>
using namespace std;
int* createVector(int size)
{
    int* vector=new int[size]; //Allocate memomery for the vector
    return vector;
}
int main()
{
    int M;
    cout<<"Enter the size of the vector M:";
    cin>>M;

    int* uservector= createVector(M); //create vector

    for(int i=0;i<M;i++)
    {
        uservector[i]=i*2;
    }
    cout<<"Vector Elements:";
    for(int i=0;i<M;i++)
    {
        cout<<uservector[i]<<" ";
    }
    delete[] uservector;
    return 0;
}
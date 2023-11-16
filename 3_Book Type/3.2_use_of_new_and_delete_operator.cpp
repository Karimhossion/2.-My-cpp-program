/*#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a=5;
    ptr=&a; // *ptr= a; ai khane a ar age & dewa hoice karon *ptr na diye &a diyeci.
    cout<<*ptr<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int(5);
    cout<<*ptr<<endl;
    *ptr=7;
    cout<<*ptr<<endl;
    delete(ptr);//amra jani daynamic vabe kono kicu allocate korte hoile deallocate korte hoi.
    return 0;
}*/
//Array Pointed by pointer variable.
/*#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int[5];
    ptr[1]=6;
    cout<<ptr[1]<<endl;
    cout<<*(ptr+1)<<endl;
    delete [] ptr;
    return 0;

}*/

#include<iostream>
using namespace std;
int main()
{
    int *arr;
    int size;

    cout<<"Enter the size of the integer array:";
    cin>>size;

    cout<<"Creating an array of size:"<<size<<endl;
    arr=new int[size];

    cout<<"Dynamic Allocation of memory for array is successfull.";

    delete arr;
    return 0;
}

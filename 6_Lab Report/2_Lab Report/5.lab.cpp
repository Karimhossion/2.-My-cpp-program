/*5. Write a C++ program to find the second largest element in an array.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int array[n];

    cout<<"Enter the elements:";
    for(int i=0; i<n;i++)
    {
        cin>>array[i];
    }
    int largest=array[0];
    int secondlargest=array[0];

    for(int i=0; i<n; i++)
    {
        if(largest<array[i])
        {
            secondlargest=largest;
            largest = array[i];

        }
        else if (array[i] > secondlargest && array[i] != largest) 
        {         
        secondlargest = array[i];
        }
        
    }
    cout<<"The Second Largest Number:"<<secondlargest<<endl;
    return 0;

}













































/*এই লাইনটি তিনটি অংশে বিভক্ত হয়ে আছে:

1. array[i] > secondlargest: এই অংশটি চেক করে যে, বর্তমান স্বত্তা secondlargest এর চেয়ে বড়।
2. &&: এটি "এবং" অপারেটর, যা দুইটি শর্ত সত্য হতে হবে যদি এই ব্লকে ঢুকতে।
3. array[i] != largest: এই অংশটি চেক করে যে, বর্তমান সংখ্যা largest এর সমান নয়।*/
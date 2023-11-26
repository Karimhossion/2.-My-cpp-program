#include<iostream>
#include<vector>  //using vector
using namespace std;
int main()
{
vector<int>vec;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    vec.push_back(x);


}
for (int i = 0; i < vec.size(); i++)
{
    cout<<vec.at(i)<<endl;
}


    /*
    vector<int>vec;
    vec.push_back(56);
    vec.push_back(54);
    vec.push_back(12);
    vec.push_back(3);
    int n=vec.size();
    cout<<vec.size()<<endl;

*/




   /* for (int  i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }*/
    
    return 0;
}
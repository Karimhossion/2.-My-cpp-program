/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //cout<<setw(10)<<setfill('.')<<"Arafat"<<endl;
   // cout<<setprecision(6)<<124.356478<<endl;
    cout<<setw(7)<<-71<<endl;
    cout<<left<<setw(7)<<-71<<endl;
    cout<<right<<setw(7)<<-71<<endl;
    cout<<internal<<setw(7)<<-71<<endl;
    return 0;
}*/
/*#include <iostream>
#include <iomanip> // Include the header for manipulators
using namespace std;
int main() {
    double number = 12345.678654;
    
    cout<<fixed << number <<endl; // Display in fixed-point notation
    
    return 0;
}
*/
/*include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double number = 12345.6789;

    cout <<fixed <<setprecision(2) << number <<endl;
    cout <<scientific <<setprecision(2) << number <<endl;

    return 0;
}
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int Basic=950, Allowance=95, Total=1045;
    cout<<setw(10)<<"Basic:"<<setw(10)<<Basic<<endl;
    cout<<setw(10)<<"Allowance:"<<setw(10)<<Allowance<<endl;
    cout<<setw(10)<<"Total:"<<setw(10)<<Total<<endl;
    return 0;
}
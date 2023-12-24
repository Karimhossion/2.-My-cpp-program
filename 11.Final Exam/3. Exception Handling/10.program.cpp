//class as an Exception
/*#include<iostream>
using namespace std;
class Error
{
    int err_code;
    char *err_desc;
    public:
        Error(int c, char *d)
        {
            err_code=c;
            err_desc=new char[strlen(d)];
            strcpy(err_desc,d);
        }
        void err_display(void )
        {
            cout<<"Error code:"<<err_code<<endl;
            cout<<"Error Description:"<<*err_desc<<endl;
        }
};
int main()
{
    try 
    {
        cout<<"A Text Exception"<<endl;
        getch();
        throw Error(99,"The Exception");
    }
}*/
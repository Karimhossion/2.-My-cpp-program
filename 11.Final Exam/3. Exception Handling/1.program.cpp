// Try block Throwing an Exception
#include <iostream>
using namespace std;
int main()
{
   /* while (1)//use koreci run time sash hobe na 
    {*/

        try
        {
            int num1, num2;
            cout << "Enter the Num1:";
            cin >> num1;
            cout << "Enter The NUm2:";
            cin >> num2;
            if (num2 == 0) // num1==0 kori ni karon 1st number 0 diye ja kei vag dibo 0 pabo so aita dorkar nai
            {
                throw -1;
            }
            double result = (double)num1 / num2;
            cout << "Result :" << result << endl;
        }
        catch (int a)
        {
            cout << "Divided by Zero is not possible" << endl;
            cout << "Please Try again" << endl;
        }
        return 0;
}
        /*
    }
}*/
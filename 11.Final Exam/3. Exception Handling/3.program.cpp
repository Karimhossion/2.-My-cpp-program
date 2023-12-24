//practise program
/*'ক্যাচ অল' ব্লক নামে একটি বিশেষ ক্যাচ ব্লক রয়েছে, যা  catch(...) হিসাবে লেখা,
যা সব ধরনের ব্যতিক্রম ধরতে ব্যবহার করা যেতে পারে। উদাহরণস্বরূপ, নিম্নলিখিত প্রোগ্রামে,
একটি int একটি ব্যতিক্রম হিসাবে নিক্ষেপ করা হয়, কিন্তু int এর জন্য কোন ক্যাচ ব্লক নেই,
তাই catch(...) ব্লকটি কার্যকর করা হবে।*/
#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 10;
    }
    catch(char *excp)
    {
        cout<<"Caught"<<excp;
    }
    catch(...)
    {
        cout<<"Default Exception"<<endl;
    }
    return 0;
}
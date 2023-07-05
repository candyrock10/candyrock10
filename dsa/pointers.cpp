#include<iostream>
using namespace std;
int main()
{
    int num=7;
    cout<<num<<endl;
    cout<<"address of a num is:"<<&num<<endl; // address of the operator(&)
    int*ptr=&num;                       // ponter will store the num address //
    cout<<num<<endl;                         // this will print 7 as our pointer has stored its address //
    cout<<"size of int is:"<<sizeof(num)<<endl; // this will print the size of int //
    return 0;
}

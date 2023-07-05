#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,5,6,8,4,9,3,4};
    cout<<sizeof(arr)<<endl; // prints size of array //
    cout<<"address of 6th index is: "<<&arr[6]<<endl; // address of 6th index //
    cout<<"value at 0th index + 2 : "<<*arr+2<<endl;// value of index 0 +2 //
    cout<<" value at 5th index is: "<<*(arr+5)<<endl;// value at 5th index //
    cout<<"value at index 2 is :"<<arr[2]<<endl;// print a value of particular index//
    char ch[5]="ahth"; // char array //
    cout<<ch<<endl; // prints the whole char  arry //
    return 0;


}

// * is use for printing the value of the address we want //
// & is use to find the address of the arr we want //
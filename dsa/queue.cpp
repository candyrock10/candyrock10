#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q; // creating a queue

    q.push(11);
    q.push(12);
    q.push(5);
    cout<<"size of queue is:"<<q.size()<<endl; 
    // q.size will tell the size of queue
    q.pop(); // we cant mention which element to remove as it follows FIFO
    cout<<"size after pop is :"<<q.size()<<endl;

    
}
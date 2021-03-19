#include <iostream>
#include"QueueP.h"
using namespace std;




void main()
{
    QueueP<int> Q1;

    Q1.Push(15, 7);
    Q1.Push(18, 9);
    Q1.Push(18, 9);
    Q1.Push(18, 9);
    Q1.Push(1, 3);
    Q1.Push(8, 6);
    Q1.Push(11, 6);
    Q1.Push(4, 6);
    Q1.Print("Q1");

    cout << "===========================" << endl;
    
    Q1.Pop();
    Q1.Pop();
    Q1.Pop();
    Q1.Pop();
    Q1.Print("Q1");
}
#include <iostream>

using namespace std;

int main()
{

    int V, P1, P2, N, VMN;

    cout << "input volume kolam :"; cin>> V;
    cout << "input lama pengisian :"; cin>> N;
    cout << "input Debit 1 :"; cin>> P1;
    cout << "input Debit 2 :"; cin>> P2;
    P1 = P2*N;
    P2 = P1*N;
    VMN = V - (P1 + P2);


    if (V >= VMN) {
        float full = (VMN * 100/V);
        float Pipe1 = (P1*100/VMN);
        float Pipe2 = (P2*100/VMN);

        cout<<"The pool is []% full, Pipe 1:[y] Pipe 2 : [Z]"<< endl;


    } else (V <= VMN); {
        int x = N;
        float y = VMN - V ;
        cout<<"For [x] hours the pool overflow with [y[ liters"<< endl;
    }
}

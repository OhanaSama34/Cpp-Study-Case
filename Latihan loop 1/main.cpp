#include <iostream>

using namespace std;

int main()
{
    int n, a, maks, minim;
    cout << "N :";cin >> n;

    for(a=0; a<n; a++) {
        cout << "data ke -" << a + 1 << endl;
        maks = a;
        minim = a;
    }
    if (a > maks){
        maks = a;
        cout << "maks :"<< a << endl;
    } else (a < minim);{
        minim = a;
        cout << "minim :"<< a - (a - 1)<< endl;
    }



}

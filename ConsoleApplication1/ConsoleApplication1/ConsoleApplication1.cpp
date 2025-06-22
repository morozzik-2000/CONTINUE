
#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

void foo(int a) {
    cout << "Summa ravna = " << a << endl;
}

int main()
{
    int a = sum(4, 5);
    foo(a);
}




#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int multiplex(int c, int e) {
    return c * e;
}
void foo(int a) {
    cout << "Summa ravna = " << a << endl;

}

int raznost(int t, int y) {
    return y - t;
}


int main()
{
    int a = sum(4, 5);
    cout << a;
    foo(a);
    raznost(4, 10);
  
    int q = multiplex(4, 5);
    cout << q;
    

}



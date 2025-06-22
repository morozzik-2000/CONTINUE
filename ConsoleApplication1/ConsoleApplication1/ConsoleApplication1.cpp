
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
void cycle() {
    for (int i = 0; i < 10; i++) {
        cout << "Hello" << endl;
    }
}
void foo1() {
    cout << "Ya looshara" << endl;
}
void foo2() {
    cout << "Ya looshara v kvadrate" << endl;
}

void time_1() {
    cout << "vremya sosat" << endl;
}
int main()
{
    int a = sum(4, 5);
    cout << a;
    foo(a);
  
    int q = multiplex(4, 5);
    cout << q;

    cycle();
    time_1();
    

    
    foo1(); 
    foo2();
}



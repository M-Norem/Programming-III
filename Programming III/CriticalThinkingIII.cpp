#include <iostream>
using namespace std;

int main() {
    int var1, var2, var3 = 0;

    cout << "Enter three integer values:\n";
    cin >> var1 >> var2 >> var3;

    int* ptr1 = new int(var1);
    int* ptr2 = new int(var2);
    int* ptr3 = new int(var3);

    cout << "Variable 1: " << var1 << ", Pointer 1: " << *ptr1 << endl;
    cout << "Variable 2: " << var2 << ", Pointer 2: " << *ptr2 << endl;
    cout << "Variable 3: " << var3 << ", Pointer 3: " << *ptr3 << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}

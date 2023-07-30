#include <iostream>
using namespace std;

template <typename T>
void swap_values(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() 
{
    int a = 5, b = 10;

    cout << "Before swap: a = " <<a<< ",b = "<<b<<endl;
    swap_values(a, b);
    cout << "After swap: a = " <<a<< ",b = "<<b<<endl;
=======
// swap the two values using templates

#include <iostream>
using namespace std;

template <typename T>
void swap_values(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() 
{
    int a = 5, b = 10;

    cout << "Before swap: a = " <<a<< ",b = "<<b<<endl;
    swap_values(a, b);
    cout << "After swap: a = " <<a<< ",b = "<<b<<endl;
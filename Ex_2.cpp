#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, next;
    
    cout << "Перші " << n << " чисел Фібоначчі: " << endl;
    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Введіть кількість чисел Фібоначчі: ";
    cin >> n;
    fibonacci(n);
    return 0;
}

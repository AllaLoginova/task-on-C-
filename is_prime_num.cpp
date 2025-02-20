#include <iostream>
#include <cmath> // Для функции sqrt
using namespace std;

int main() {
    long long n; // Используем long long для поддержки больших чисел
    cin >> n;

    if (n <= 1) {
        cout << "NO" << endl; // Числа меньше 2 не являются простыми
        return 0;
    }
    if (n <= 3) {
        cout << "YES" << endl; // 2 и 3 - простые числа
        return 0;
    }

    // Исключаем четные числа и числа, делящиеся на 3
    if (n % 2 == 0 || n % 3 == 0) {
        cout << "NO" << endl;
        return 0;
    }

    // Проверяем делимость от 5 до sqrt(n)
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl; // Если не нашли делителей, число простое
    return 0;
}

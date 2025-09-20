#include <iostream>

int mcd(int a, int b) {
    while (b != 0) {
        int residuo = b;
        b = a % b;
        a = residuo;
    }
    return a;
}

int main() {
    int x, y;

    std::cout << "Ingrese el primer número: ";
    std::cin >> x;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> y;

    std::cout << "El MCD de " << x << " y " << y << " es: " << mcd(x, y) << std::endl;

    return 0;
}

#include <iostream>

int sumaArreglo(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int arreglo[] = {3, 5, 7, 2, 8};
    int n = 5;

    std::cout << "La suma es: " << sumaArreglo(arreglo, n) << std::endl;

    return 0;
}

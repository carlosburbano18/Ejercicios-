#include <iostream>
#include <cmath> 

double interesCompuesto(double CI, double i, int n) {
    double CF = CI * std::pow((1 + i), n);
    return CF;
}

int main() {
    double CI;  
    double i;   
    int n;      

    std::cout << "Ingrese el capital inicial: ";
    std::cin >> CI;

    std::cout << "Ingrese la tasa de interes (en decimal, ej. 0.05 para 5%): ";
    std::cin >> i;

    std::cout << "Ingrese el numero de anios: ";
    std::cin >> n;

    double CF = interesCompuesto(CI, i, n);
    std::cout << "El capital final es: " << CF << std::endl;

    return 0;
}

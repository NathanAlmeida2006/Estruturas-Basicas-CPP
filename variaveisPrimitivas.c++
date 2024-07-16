/**
 * Um programa simples em C++ que declara diferentes tipos de variáveis, as inicializa com valores específicos e retorna 0.
 * 
 * Declara variáveis de diferentes tipos (short, int, long, float, double, char),
 * inicializa cada uma com um valor específico e retorna 0 para indicar que o programa foi executado com sucesso.
 */
#include <iostream>

int main() {
    short a = 1;    // Variável do tipo short inicializada com o valor 1
    int b = 2;      // Variável do tipo int inicializada com o valor 2
    long c = 3;     // Variável do tipo long inicializada com o valor 3
    float d = 4;    // Variável do tipo float inicializada com o valor 4
    double e = 5;   // Variável do tipo double inicializada com o valor 5
    char f = 'A';   // Variável do tipo char inicializada com o caractere 'A'

    // Imprimir todas as variáveis
    std::cout << "Valor de 'a' (short): " << a << std::endl;
    std::cout << "Valor de 'b' (int): " << b << std::endl;
    std::cout << "Valor de 'c' (long): " << c << std::endl;
    std::cout << "Valor de 'd' (float): " << d << std::endl;
    std::cout << "Valor de 'e' (double): " << e << std::endl;
    std::cout << "Valor de 'f' (char): " << f << std::endl;

    return 0;       // Retorna 0 para indicar que o programa foi executado com sucesso
}

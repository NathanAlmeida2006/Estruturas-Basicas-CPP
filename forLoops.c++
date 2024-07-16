/**
 * Um programa simples em C++ que utiliza um loop for para imprimir os números de 0 a 9.
 * 
 * Utiliza um loop for para iterar de 0 a 9 e imprime cada número seguido de uma quebra de linha.
 * Retorna 0 para indicar que o programa foi executado com sucesso.
 */
#include <iostream>

int main() {
    for (int i = 0; i < 10; i++) {
        std::cout << i << "\n" << std::endl;  // Imprime o valor de 'i' seguido de uma quebra de linha
    }

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}

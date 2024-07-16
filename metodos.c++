/**
 * Um programa simples em C++ que utiliza uma função para encontrar o máximo entre dois números inteiros.
 * 
 * Este programa define a função 'max' que recebe dois números inteiros e retorna o maior deles.
 * Em seguida, utiliza essa função para determinar e imprimir o maior valor entre duas variáveis 'a' e 'b'.
 */
#include <iostream>

/**
 * Função que retorna o máximo entre dois números inteiros.
 * 
 * @param a O primeiro número inteiro.
 * @param b O segundo número inteiro.
 * @return O maior número entre 'a' e 'b'.
 */
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a = 10;
    int b = 20;

    int maior = max(a, b);

    std::cout << "O maior valor é: " << maior << std::endl;

    return 0;
}

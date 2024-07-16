/**
 * Um programa simples em C++ que verifica se um número digitado pelo usuário é par ou ímpar.
 * 
 * Solicita ao usuário que digite um número inteiro.
 * Verifica se o número é par ou ímpar usando o operador de módulo (%).
 * Imprime uma mensagem indicando se o número é par ou ímpar, utilizando std::endl para inserir uma nova linha.
 */
#include <iostream>

int main() {
    int x;  // Variável para armazenar o valor digitado pelo usuário

    std::cout << "Digite um valor: ";
    std::cin >> x;  // Solicita que o usuário digite um valor e armazena em 'x'

    if (x % 2 == 0) {
        std::cout << "O valor é par" << std::endl;  // Imprime mensagem de par seguido de uma nova linha
    } else {
        std::cout << "O valor é ímpar!" << std::endl;  // Imprime mensagem de ímpar seguido de uma nova linha
    }

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}

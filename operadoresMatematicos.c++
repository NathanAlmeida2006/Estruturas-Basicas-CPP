/**
 * Um programa simples em C++ que realiza operações aritméticas básicas com duas variáveis inteiras.
 * 
 * Declara duas variáveis inteiras 'a' e 'b', inicializa-as com os valores 10 e 20, respectivamente.
 * Calcula a soma, subtração, multiplicação, divisão e módulo entre 'a' e 'b'.
 * Imprime os resultados de cada operação.
 * Retorna 0 para indicar que o programa foi executado com sucesso.
 */
#include <iostream>

int main() {
    int a = 10;          // Declara e inicializa 'a' com o valor 10
    int b = 20;          // Declara e inicializa 'b' com o valor 20

    int soma = a + b;               // Calcula a soma de 'a' e 'b'
    int subtracao = a - b;          // Calcula a subtração de 'a' por 'b'
    int multiplicacao = a * b;      // Calcula a multiplicação de 'a' e 'b'
    int divisao = a / b;            // Calcula a divisão de 'a' por 'b'
    int modulo = a % b;             // Calcula o resto da divisão de 'a' por 'b'

    // Imprime os resultados das operações
    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Subtração: " << subtracao << std::endl;
    std::cout << "Multiplicação: " << multiplicacao << std::endl;
    std::cout << "Divisão: " << divisao << std::endl;
    std::cout << "Módulo: " << modulo << std::endl;

    return 0;   // Retorna 0 para indicar que o programa foi executado com sucesso
}

/**
 * Um programa simples em C++ que solicita repetidamente que o usuário digite um valor inteiro até que seja digitado o valor 0.
 * 
 * Utiliza um loop while para continuar solicitando entradas até que o usuário digite 0. 
 * Após cada entrada, exibe o valor digitado e continua o loop até que o usuário digite 0.
 * Por fim, exibe uma mensagem de despedida antes de encerrar o programa.
 */
#include <iostream>

int main() {
    int x;  // Variável para armazenar o valor digitado pelo usuário
    
    while (x != 0) {
        std::cout << "Digite um valor: ";
        std::cin >> x;  // Solicita que o usuário digite um valor e armazena em 'x'
        std::cout << "O valor digitado foi: " << x << "\n" << std::endl;  // Exibe o valor digitado pelo usuário
    }
    
    std::cout << "Bye";  // Mensagem de despedida
    return 0;
}

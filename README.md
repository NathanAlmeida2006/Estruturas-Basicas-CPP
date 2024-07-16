# Estruturas-Basicas-CPP

Este repositório contém exemplos e projetos básicos em C++ para ilustrar conceitos fundamentais de programação. Cada exemplo demonstra diferentes aspectos das estruturas básicas de C++.

## Introdução

O objetivo deste repositório é fornecer exemplos práticos que ajudem iniciantes a entender os conceitos básicos de C++. Cada exemplo é documentado e explicado detalhadamente para facilitar a compreensão.

## Exemplos

### Entrada e Saída

Demonstra como realizar operações básicas de entrada e saída usando `std::cin` e `std::cout`.

#### Código
```cpp
#include <iostream>

int main() {
    int x;
    std::cout << "Digite um valor: ";
    std::cin >> x;
    std::cout << "O valor digitado foi: " << x << std::endl;
    return 0;
}
```

### Condicionais

Mostra como usar estruturas condicionais (`if`, `else`) para tomar decisões com base em condições.

#### Código
```cpp
#include <iostream>

int main() {
    int x;
    std::cout << "Digite um valor: ";
    std::cin >> x;

    if (x % 2 == 0) {
        std::cout << "O valor é par" << std::endl;
    } else {
        std::cout << "O valor é ímpar!" << std::endl;
    }
    
    return 0;
}
```

### Funções

Explica como definir e usar funções para modularizar e reutilizar código.

#### Código
```cpp
#include <iostream>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 10;
    int b = 20;
    int maior = max(a, b);
    std::cout << "O maior valor é: " << maior << std::endl;
    return 0;
}
```

### Classes e Objetos

Introduz a programação orientada a objetos (OOP) com a definição de classes e criação de objetos.

#### Código
```cpp
#include <iostream>
#include <string>

class Carro {
private:
    std::string modelo;
    std::string cor;

public:
    Carro(std::string mod, std::string c) : modelo(mod), cor(c) {}

    std::string getModelo() {
        return modelo;
    }

    void setModelo(std::string mod) {
        modelo = mod;
    }

    std::string getCor() {
        return cor;
    }

    void setCor(std::string c) {
        cor = c;
    }

    void imprimirInfo() {
        std::cout << "Carro: Modelo " << modelo << ", Cor " << cor << std::endl;
    }
};

int main() {
    Carro meuCarro("SUV", "Prata");
    meuCarro.imprimirInfo();

    meuCarro.setModelo("Sedan");
    meuCarro.setCor("Preto");
    meuCarro.imprimirInfo();

    return 0;
}
```

## Como Usar

1. Clone este repositório:
   ```sh
   git clone https://github.com/seu-usuario/Estruturas-Basicas-CPP.git
   ```
2. Navegue até o diretório do projeto:
   ```sh
   cd Estruturas-Basicas-CPP
   ```
3. Compile e execute os exemplos usando um compilador C++, como `g++`:
   ```sh
   g++ exemplo.cpp -o exemplo
   ./exemplo
   ```

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests para melhorar os exemplos ou adicionar novos.

## Contato:

Se você tiver alguma dúvida ou sugestão, sinta-se à vontade para abrir uma issue no repositório do GitHub ou enviar um e-mail para: 
[nathanfelipi2006@gmail.com].

---

Desenvolvido com ❤️ por [Nathan Felipi Almeida].

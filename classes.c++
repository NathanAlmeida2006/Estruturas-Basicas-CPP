/**
 * Classe Carro que representa um veículo com modelo e cor.
 */
#include <iostream>
#include <string>

class Carro {
private:
    std::string modelo;  // Modelo do carro
    std::string cor;     // Cor do carro

public:
    /**
     * Construtor da classe Carro.
     * @param mod Modelo do carro.
     * @param c Cor do carro.
     */
    Carro(std::string mod, std::string c) : modelo(mod), cor(c) {}

    /**
     * Método para obter o modelo do carro.
     * @return O modelo do carro.
     */
    std::string getModelo() {
        return modelo;
    }

    /**
     * Método para definir o modelo do carro.
     * @param mod Novo modelo para definir.
     */
    void setModelo(std::string mod) {
        modelo = mod;
    }

    /**
     * Método para obter a cor do carro.
     * @return A cor do carro.
     */
    std::string getCor() {
        return cor;
    }

    /**
     * Método para definir a cor do carro.
     * @param c Nova cor para definir.
     */
    void setCor(std::string c) {
        cor = c;
    }

    /**
     * Método para imprimir informações sobre o carro.
     */
    void imprimirInfo() {
        std::cout << "Carro: Modelo " << modelo << ", Cor " << cor << std::endl;
    }
};

int main() {
    // Criando um objeto da classe Carro
    Carro meuCarro("SUV", "Prata");

    // Imprimindo informações do carro usando o método imprimirInfo()
    meuCarro.imprimirInfo();

    // Alterando o modelo e a cor do carro usando os métodos setModelo() e setCor()
    meuCarro.setModelo("Sedan");
    meuCarro.setCor("Preto");

    // Imprimindo novamente as informações atualizadas do carro
    meuCarro.imprimirInfo();

    return 0;
}

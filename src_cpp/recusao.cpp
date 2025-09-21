#include "recursao.hpp"

// Implementação da função recursiva conforme especificado [cite: 1382]
int recursao(const std::string &str, char alvo) {
    // Caso base: se a string estiver vazia, a contagem é 0[cite: 180].
    if (str.empty()) {
        return 0;
    }

    // Caso recursivo: divide o problema em "primeiro caractere" e "resto da string"[cite: 183].
    // Pega o resto da string (a partir do segundo caractere)
    std::string resto_da_string = str.substr(1);

    // Verifica se o primeiro caractere da string atual é o alvo
    int corresponde = (str[0] == alvo) ? 1 : 0;

    // A contagem total é a soma da correspondência atual mais a contagem no resto da string
    return corresponde + recursao(resto_da_string, alvo);
}
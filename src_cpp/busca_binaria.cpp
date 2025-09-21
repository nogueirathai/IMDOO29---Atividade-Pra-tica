#include "busca_binaria.hpp"

// Implementação da função busca_binaria conforme especificado[cite: 1347].
// A função utiliza o princípio da busca binária para minimizar chamadas à API.
int busca_binaria(int n) {
    int inicio = 1;
    int fim = n;
    int primeira_defeituosa = n; // Inicializa com um valor padrão

    while (inicio <= fim) {
        // Calcula o meio para evitar overflow: inicio + (fim - inicio) / 2
        int meio = inicio + (fim - inicio) / 2;

        if (isBadVersion(meio)) {
            // Se a versão do meio é defeituosa, ela pode ser a primeira.
            // Guardamos o resultado e tentamos encontrar uma anterior.
            primeira_defeituosa = meio;
            fim = meio - 1;
        } else {
            // Se não for defeituosa, a primeira deve estar à direita.
            inicio = meio + 1;
        }
    }

    return primeira_defeituosa;
}
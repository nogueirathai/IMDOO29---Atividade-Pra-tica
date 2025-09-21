#include "busca_seq_ordenada.hpp"
#include <utility> // Para std::swap

// 1. Implementação da ordenação (Bubble Sort)
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// 2. Implementação da busca sequencial ordenada
int busca_seq_ordenada(int arr[], int n, int alvo) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == alvo) {
            return i; // Retorna o índice se encontrar
        }
        if (arr[i] > alvo) {
            return -1; // Para a busca se o elemento atual for maior que o alvo
        }
    }
    return -1; // Retorna -1 se não encontrar
}

// 3. Implementação da contagem de especialidades distintas
int conta_especialidades_distintas(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    
    // Primeiro, ordena o vetor para agrupar especialidades iguais [cite: 1358]
    bubble_sort(arr, n);
    
    // Inicia a contagem com 1, pois o primeiro elemento é sempre único
    int contagem = 1;
    
    // Percorre o vetor a partir do segundo elemento
    for (int i = 1; i < n; ++i) {
        // Se o elemento atual for diferente do anterior, é uma nova especialidade
        if (arr[i] != arr[i - 1]) {
            contagem++;
        }
    }
    
    return contagem;
}
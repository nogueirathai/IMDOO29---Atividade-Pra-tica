#ifndef BUSCA_SEQ_ORDENADA_HPP
#define BUSCA_SEQ_ORDENADA_HPP

#include <vector>

// Função de ordenação auxiliar 
void bubble_sort(int arr[], int n);

// Função de busca sequencial em um vetor ordenado 
int busca_seq_ordenada(int arr[], int n, int alvo);

// Função principal que conta as especialidades distintas [cite: 1368]
int conta_especialidades_distintas(int arr[], int n);

#endif // BUSCA_SEQ_ORDENADA_HPP
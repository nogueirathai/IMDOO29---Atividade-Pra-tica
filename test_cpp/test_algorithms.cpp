#include <iostream>

// Inclui os cabeçalhos das funções que vamos testar
#include "busca_binaria.hpp"
#include "busca_seq_ordenada.hpp"
#include "recursao.hpp"

// --- Infraestrutura de Testes (geralmente fornecida) ---
int test_count = 0;
int pass_count = 0;

// Macro para simplificar a execução e verificação dos testes
#define RUN_TEST(test_name, func_call, expected) \
    do { \
        test_count++; \
        std::cout << "Testando: " << test_name << std::endl; \
        auto result = (func_call); \
        if (result == expected) { \
            pass_count++; \
            std::cout << "  [PASSOU]" << std::endl; \
        } else { \
            std::cout << "  [FALHOU] >> Esperado: " << expected << ", Recebido: " << result << std::endl; \
        } \
    } while (0)

// --- Simulação da API para a Questão 5.1 ---
// Variável global para controlar qual é a primeira versão defeituosa no teste.
int bad_version_global = 0;

// Simulação da API isBadVersion, conforme especificado na atividade [cite: 102]
bool isBadVersion(int version) {
    return version >= bad_version_global;
}


int main() {
    std::cout << "--- Iniciando Testes da Atividade Pratica 01 ---" << std::endl;

    // --- Testes para a Questão 5.1: Primeira versão defeituosa (Busca Binária) ---
    std::cout << "\n--- Testando busca_binaria ---" << std::endl;
    // Cenário 1: Exemplo da atividade [cite: 100, 101]
    int n1 = 5;
    bad_version_global = 4;
    RUN_TEST("Busca Binaria (n=5, bad=4)", busca_binaria(n1), 4);
    
    // Cenário 2: Um caso com mais versões
    int n2 = 20;
    bad_version_global = 13;
    RUN_TEST("Busca Binaria (n=20, bad=13)", busca_binaria(n2), 13);
    
    // Cenário 3: A primeira versão já é a defeituosa
    int n3 = 10;
    bad_version_global = 1;
    RUN_TEST("Busca Binaria (n=10, bad=1)", busca_binaria(n3), 1);


    // --- Testes para a Questão 5.2: Equipes iguais e diversas ---
    std::cout << "\n--- Testando conta_especialidades_distintas ---" << std::endl;
    // Cenário 1: Exemplo da atividade [cite: 132]
    int arr1[] = {4, 2, 1, 4, 2, 1};
    RUN_TEST("Especialidades distintas (exemplo 1)", conta_especialidades_distintas(arr1, 6), 3);
    
    // Cenário 2: Todas as especialidades são iguais
    int arr2[] = {5, 5, 5, 5, 5};
    RUN_TEST("Especialidades distintas (todas iguais)", conta_especialidades_distintas(arr2, 5), 1);
    
    // Cenário 3: Todas as especialidades são diferentes
    int arr3[] = {10, 20, 30, 40};
    RUN_TEST("Especialidades distintas (todas diferentes)", conta_especialidades_distintas(arr3, 4), 4);
    
    // Cenário 4: Vetor vazio
    int arr4[] = {};
    RUN_TEST("Especialidades distintas (vetor vazio)", conta_especialidades_distintas(arr4, 0), 0);


    // --- Testes para a Questão 5.3: Contagem Recursiva ---
    std::cout << "\n--- Testando recursao ---" << std::endl;
    // Cenário 1: Exemplo da atividade [cite: 142]
    RUN_TEST("Contagem Recursiva ('banana', 'a')", recursao("banana", 'a'), 3);
    
    // Cenário 2: Caractere não existe
    RUN_TEST("Contagem Recursiva ('hello world', 'z')", recursao("hello world", 'z'), 0);
    
    // Cenário 3: String vazia
    RUN_TEST("Contagem Recursiva (string vazia, 'a')", recursao("", 'a'), 0);
    
    // Cenário 4: Múltiplas ocorrências de outro caractere
    RUN_TEST("Contagem Recursiva ('mississippi', 's')", recursao("mississippi", 's'), 4);


    // --- Resumo dos Testes ---
    std::cout << "\n--- Fim dos Testes ---" << std::endl;
    std::cout << "Resumo: " << pass_count << " de " << test_count << " testes passaram." << std::endl;

    return (pass_count == test_count) ? 0 : 1;
}
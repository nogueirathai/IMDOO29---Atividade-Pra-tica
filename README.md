# IMDOO29---Atividade-Pra-tica
Atividade realizada para a disciplina de EDB I

## sobre o projeto

Este repositório contém a resolução da primeira atividade prática da disciplina de **Estruturas de Dados Básicas I (IMD0029)**, ministrada pelo Prof. João Guilherme na Universidade Federal do Rio Grande do Norte[cite: 1243, 1244].

O objetivo deste trabalho é exercitar a implementação e a compreensão de algoritmos fundamentais da ciência da computação, incluindo:

  * **Busca Binária** [cite: 1252]
  * **Busca Sequencial Ordenada** [cite: 1250, 1262]
  * **Recursão** [cite: 1253]

As soluções foram desenvolvidas na linguagem C++.

## Estrutura do Projeto

O projeto está organizado na seguinte estrutura de diretórios para facilitar a navegação e a compilação:

```
.
├── include_cpp/         # Arquivos de cabeçalho (.hpp) com as assinaturas das funções
├── src_cpp/             # Arquivos de código-fonte (.cpp) com a implementação das funções
├── test_cpp/            # Arquivos de teste para as implementações em C++
└── Makefile             # Script para automatizar a compilação e execução dos testes
```

## Especificação das Funções

A seguir, uma descrição detalhada de cada função implementada, seu propósito, funcionamento, parâmetros e retorno.

-----

### 1\. `busca_binaria`

  * **Arquivo Fonte:** `src_cpp/busca_binaria.cpp`
  * **Objetivo:** Atuar como um detetive digital para encontrar a "primeira versão defeituosa" de um produto em uma linha de `n` versões[cite: 1332]. O desafio é descobrir essa versão minimizando o número de verificações, como se cada verificação tivesse um custo.
  * **Funcionamento:** A função utiliza o poderoso algoritmo de busca binária[cite: 1340]. [cite\_start]Ela parte do princípio de que se uma versão é defeituosa, todas as seguintes também são[cite: 1329]. A cada passo, a função verifica a versão do "meio" do intervalo de busca. Se a versão do meio for defeituosa, ela descarta a metade superior e continua a busca na metade inferior. Caso contrário, descarta a metade inferior e busca na superior. Esse processo reduz o espaço de busca pela metade a cada iteração, tornando-a extremamente eficiente.
  * **Parâmetros:**
      * `int n`: O número total de versões a serem verificadas[cite: 1337].
  * **Retorno:**
      * `int`: O número da primeira versão que é considerada defeituosa[cite: 1338].

-----

### 2\. `conta_especialidades_distintas`

  * **Arquivo Fonte:** `src_cpp/busca_seq_ordenada.cpp`
  * **Objetivo:** Analisar um conjunto de "especialidades" de uma turma, representadas por números inteiros, e determinar quantas delas são únicas, ou seja, sem contar as repetições[cite: 1357, 1359].
  * **Funcionamento:** Esta solução funciona como um organizador de dados. O processo é realizado em duas etapas principais:
    1.  **Ordenação:** Primeiramente, a função auxiliar `bubble_sort` ordena o vetor de especialidades[cite: 1362]. Isso agrupa todos os números iguais em sequência.
    2.  **Contagem:** Em seguida, a função principal percorre o vetor já ordenado. Ela conta um elemento apenas se ele for diferente do elemento anterior. Isso garante que, mesmo que uma especialidade apareça várias vezes, ela seja contada apenas uma vez.
  * **Parâmetros:**
      * `int arr[]`: O vetor de números inteiros representando as especialidades[cite: 1368].
      * `int n`: O número de elementos no vetor[cite: 1368].
  * **Retorno:**
      * `int`: A quantidade de especialidades distintas encontradas no vetor.

-----

### 3\. `recursao`

  * **Arquivo Fonte:** `src_cpp/recursao.cpp`
  * **Objetivo:** Contar quantas vezes um caractere específico aparece em uma string. [cite\_start]A principal restrição é que a solução deve ser **puramente recursiva**, sem o uso de laços de repetição como `for` ou `while`[cite: 1378, 1379].
  * **Funcionamento:** A função se baseia na clássica estratégia recursiva de "dividir para conquistar".
      * **Caso Base:** Se a string estiver vazia, não há caracteres para contar, então a função retorna 0. Este é o ponto de parada.
      * **Passo Recursivo:** A função verifica o primeiro caractere da string. Se ele for o caractere alvo, a função retorna `1` somado ao resultado da chamada de si mesma para o *restante da string*. Se não for, ela retorna `0` somado ao resultado da chamada para o *restante da string*. Assim, o problema é reduzido a cada chamada, até que a string se torne vazia.
  * **Parâmetros:**
      * `const std::string &str`: A string na qual a busca será realizada[cite: 1382].
      * `char alvo`: O caractere que desejamos contar[cite: 1382].
  * **Retorno:**
      * `int`: O número total de vezes que o caractere `alvo` aparece na string.

## Instruções de Uso

Para compilar e executar o projeto, certifique-se de ter o compilador `g++` e a ferramenta `make` instalados em seu sistema.

### Compilando e Executando os Testes

1.  Abra um terminal na pasta raiz do projeto.

2.  Execute o seguinte comando para compilar todos os arquivos C++ e rodar os testes automatizados:

    ```sh
    make test_cpp
    ```

    Este comando irá gerar um executável chamado `run_tests_cpp` e executá-lo em seguida, mostrando o resultado de cada teste no terminal[cite: 1288].

### Limpando o Projeto

Para remover os arquivos executáveis gerados durante a compilação, utilize o comando:

```sh
make clean
```
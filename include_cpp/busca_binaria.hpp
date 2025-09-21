#ifndef BUSCA_BINARIA_HPP
#define BUSCA_BINARIA_HPP

// A API isBadVersion é fornecida externamente ou simulada no teste.
// Esta declaração garante que o compilador saiba de sua existência.
bool isBadVersion(int version);

/**
 * @brief Encontra a primeira versão defeituosa usando busca binária.
 * * @param n O número total de versões.
 * @return O número da primeira versão defeituosa.
 */
int busca_binaria(int n);

#endif // BUSCA_BINARIA_HPP
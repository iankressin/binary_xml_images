#ifndef MATRIX_H
#define MATRIX_H

#include <cstdint>
#include <string>

//! Classe Matriz
/*!
   Classe matriz. Representa uma matriz m x n. Onde m é o número de linhas e n é
   o número de colunas.
 */
class Matrix {
 public:
  //! Construtor
  /*!
     Inicializa uma matriz nula com as dimensões passadas por argumento. Recebe
     como argumentos os números de linhas e colunas da matriz.

     \param rows: Número de linhas da matriz (size_t).
     \param columns: Número de colunas da matriz (size_t).
   */
  Matrix(std::size_t rows, std::size_t columns);

  //! Destrutor
  /*!
     Destrutor da classe. Libera a memória alocada na inicialização do objeto.
   */
  ~Matrix(void);

  //! Popular Matriz.
  /*!
     Popula a matrix. Recebe uma string de 0s, 1s ou espaços em branco.

     Inicializa duas variáveis auxiliares linha e coluna. Itera pelos elementos
     da string. Se for um espaço em vazio, o ignora e segue para o próximo
     elemento. Caso contrário atribui ao elemento da matriz na posição (linha,
     coluna) o inteiro equivalente ao elemento na posição atual.

     Incrementa linha e coluna.

     Testa se é o último elemento da coluna. Caso positivo, zera variável
     auxiliar coluna e testa se a linha é a última. Caso positivo, sai do laço.

     \param data: string para popular a matriz.
   */
  void populate(const std::string& content);

  //! Linhas
  /*!
     Número de linhas da matriz. Tipo inteiro sem sinal size_t.
   */
  std::size_t rows_;
  //! Colunas
  /*!
     Altura da matrix. Tipo inteiro sem sinal size_t.
   */
  std::size_t columns_;

 //private:
  //! Matriz
  /*!
     Matriz bidimensional de números inteiros. Pointeiro para ponteiro para
     inteiros (int **).
   */
  int** matrix;
};

#endif
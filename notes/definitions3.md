### Funções
_Funções são uma coleção de de statements executadas sequencialmente e podem ser chamadas._
- Usamos funções para ajudar a tornar o código mais flexível e escrever em DRY (Dont Repeat Yourself)
- Sempre usar o return para retornar valores de um função.
- Funções que não retornam valores, funções com statements de output como cout, são **void functions**
- A função main() não poder ser invocada por outras funções
- Não podemos definir funções dentro de outras funções.

##### Parametros e Argumentos de uma Função
- Os parametros são variáveis usadas para performar uma ação dentro da função, elas são definidas entre os parenteses no cabeçalho da função
- Ao invocar uma função que demanda parametros, devemos fornecer valores à essa função.
- As vezes podemos achar funções com parametros não definidos, como: myFunction(*int* /* *comentário* */). Fazemos isso quando o parametro não é usado na função.
- Qualquer derivada escrita dentro de uma função fora de main() é uma _variável global_
- Variáveis só podem ser usadas se estiverem no _scope_ ou seja, se já foram definidas.

##### Foward Declarations
_Podemos usar funções não criadas ainda dentro de main() usando a foward declaration dela_
- Usamos Foward Declarations para deixar ciente da existência de uma função. Muito usado para códigos de múltiplos files.

##### Headers e include em outros arquivos
- Para usar include em um arquivo C++, usamos a seguinte sintaxe:
    #include "arquivolocal._**h**_"    Usamos "" pois é um arquivo local e o h para simbolizar um _**HEADER**_
- Para isso, precisamos criar um arquivo de mesmo nome com o formato .h e definir sua formatação.
    #ifndef NOMEDOARQUIVO_H
    #define NOMEDOARQUIVO_H
    _escrevemos a função que queremos_
    #endif

    Esses #'s previne uma nested include entre os arquivos.
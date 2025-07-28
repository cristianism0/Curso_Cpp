### Variables x Values x Objects

##### Values:
- É uma letra ou instância que pode representar um dado.

##### Objects:
- São espaços na RAM usados para armazenar valores.

##### Variables:
- É um objeto que possui um nome.

### Buffer
_Buffer é um local de armazenamento temporário. Informações são armazenadas no buffer e no fim são *flushadas*._

- Buffer segue uma ordem FIFO (como uma BFS na teoria dos grafos), toda informação de output é armazenada no fim da lista e as primeiras serão flushadas no fim do algoritmo.
- Cada linha de um input buffer é terminada por um '\n'
- Se tivermos duas variável x e y edermos um input separado a x, como: "4 5", o buffer irá armazenar: 4 5\n, como os statements param nos espaços, a variável y não será solicitada visto que o buffer possui dois valores associados.
- Se uma extração for falha, o resultado voltará 0. ex: uma variável int x{} onde o valor atribuído é "b", b\n será adicionado ao buffer e x receberá 0.

### Operadores
- Unary: Operadores que agem em um operando, ex: _operador-_ em -5.
- Binary: Operadores que agem em dois operandos, ex: _operador+_ em 3+6.
- Ternary: Operadores que agem em três operandos, ex: _condicional_: string result = (10 > 5) ? "10 é maior que 5" : "5 é maior que 10";
- Nullary: Operadores que agem em 0 (zero) operandos, ex: _throw_.
- Side Effects: alterações que ocorrem em uma variável além do resultado esperado, ex:
    int x{2}
    std::cout << (x=5) << "\n"   //retorna um 5 e **altera** o valor x para 5 (Side Effect).



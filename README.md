# Navegando

[Aula 2](https://github.com/EduardaNunes/Algoritmos-I/edit/main/README.md#aula-2---variáveis-e-in-out) <br>
[Aula 3](https://github.com/EduardaNunes/Algoritmos-I/edit/main/README.md#aula-3---funções) <br> 
[Aula 4](https://github.com/EduardaNunes/Algoritmos-I/edit/main/README.md#aula-4---condicionais) <br> 
[Aula 5](https://github.com/EduardaNunes/Algoritmos-I/edit/main/README.md#aula-5---repetições) <br> 
[Aula 6](https://github.com/EduardaNunes/Algoritmos-I/edit/main/README.md#aula-6---vetores-numéricos) <br> 
[Aula 7](https://github.com/EduardaNunes/Algoritmos-I/edit/main/README.md#aula-7---strings) <br> 
[Aula 8](https://github.com/EduardaNunes/Algoritmos-I/edit/main/README.md#aula-8---matrizes)

# Aula 2 - Variáveis e In Out

## Exercício 1:

Calibrar os pneus do carro deve ser uma tarefa cotidiana de todos os motoristas. Para isto, os postos de gasolina possuem uma bomba de ar. A maioria das bombas atuais são eletrônicas, permitindo que o motorista indique a pressão desejada num teclado. Ao ser ligada ao pneu, a bomba primeiro lê a pressão atual e calcula a diferença de pressão entre a desejada e a lida. Com esta diferença ela esvazia ou enche o pneu para chegar na pressão correta.

Sua ajuda foi requisitada para desenvolver o programa da próxima bomba da SBC - Sistemas de Bombas Computadorizadas.

Escreva um programa que, dada a pressão desejada digitada pelo motorista e a pressão do pneu lida pela bomba, indica a diferença entre a pressão desejada e a pressão lida.

Entrada:

A primeira linha da entrada contém um inteiro N que indica a pressão desejada pelo motorista. A segunda linha contém um inteiro M que indica a pressão lida pela bomba.

Saída:

Seu programa deve imprimir uma única linha, contendo a diferença entre a pressão desejada e a pressão lida.

For example:

| Input | Result |
| --- | --- |
| 30 <br> 18 | Diferenca entre a pressao desejada e lida: 12 | 
| 27 <br> 30  | Diferenca entre a pressao desejada e lida: -3 |
                                                

## Exercício 2

Escreva um algoritmo que leia três números inteiros e positivos (A, B, C), calcule e imprima D com base em R e S:

R = (A + B)2
S = (B + C)2
D = (R + S)/2
For example:

| Input | Result |
| --- | --- |
| 0 0 0 | D = 0 |
| 1 2 3 | D = 17 |

## Exercício 3

Leia os quatro valores correspondentes às coordenadas x e y de dois pontos quaisquer no plano, p1 = (x1,y1) e p2 = (x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia = √(x2−x1)^2+(y2−y1)^2

Entrada:

A entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante (float): x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída:

A saída deve conter o texto "Distancia:" seguido por um espaço e pela distância calculada com 4 casas após o ponto decimal.

For example:

| Input | Result |
| --- | --- |
| 1.0 7.0 <br> 5.0 9.0 | Distancia: 4.4721 |
| -2.5 0.4 <br> 12.1 7.3 | Distancia: 16.1484 |

# Aula 3 - Funções

## Exercício 1

Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro o raio de um círculo e retorne a área deste. Utilize pi = 3.141592.
Escreva uma função principal (main) que leia um valor real do teclado, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido.
For example:

| Input | Result |
| --- | --- |
| 10 | Área do círculo: 314.16 cm2. |
| 2 | Área do círculo: 12.57 cm2. |

## Exercício 2

Uma loja proporciona ao seus clientes um desconto de 10% para pagamentos à vista independente do valor total da compra.

Escreva uma função que receba como parâmetro o valor total de uma compra e retorne o valor para pagamento à vista (com 10% de desconto).
Escreva uma função principal (main) que leia o valor da compra digitado pelo usuário, chame a função anterior e imprima o valor para pagamento à vista.
For example:

| Input | Result |
| --- | --- |
| 100  | O valor a vista eh de R$ 90.00 |
| 81.50 | O valor a vista eh de R$ 73.35 |

## Exercício 3

Para resolver este exercício, siga os passos abaixo:

Escreva uma função que receba como parâmetro um tempo expresso em segundos e imprima na tela esse mesmo tempo e horas, minutos e segundos.
Escreva uma função principal (main) que leia um valor inteiro do teclado e chame a função desenvolvida no item anterior.
For example:

| Input | Result |
| --- | --- |
| 13579 | Conversão: 3 horas, 46 minutos e 19 segundos. |
| 72000 | Conversão: 20 horas, 0 minutos e 0 segundos. |

# Aula 4 - Condicionais

## Exercício 1

Faça uma função que receba como parâmetro um valor inteiro. Esta função deve retornar 1 se o valor recebido como parâmetro for par e positivo e, caso contrário, a função deve retornar 0.

Crie um programa que leia um valor inteiro,  chame a função criada e imprima a mensagem “Conjunto Z*+ e par” caso o valor retornado pela função seja igual a 1, caso contrário o programa deve imprimir “Valor invalido”.

For example:

| Input | Result |
| --- | --- |
| 2 | Conjunto Z*+ e par |
| 148 | Conjunto Z*+ e par |
| -2 | Valor invalido |
| 3 | Valor invalido |

## Exercicio 2

Faça uma função que receba como parâmetro  dois números reais e um caractere: ' + ', ' - ', ' * ' ou ' / '. A função deve imprimir o resultado da operação efetuada sobre os números lidos.
 
Lembre-se que divisão por 0 não existe, portanto imprima a mensagem "ERRO: Divisao por Zero" caso não seja possível efetuar um cálculo.
 
Faça também um programa (main) para ler o caractere e os números e chamar a função feita.
For example:

| Input | Result |
| --- | --- |
| / <br> 2 <br> 3 | 0.6667 |
| + <br> 2.5 <br> 3.2 | 5.7000 |

## Exercício 3

Desenvolva a função classificaCaractere que lê um caractere e imprime uma das seguintes mensagens:

* "Operador matematico." (+, -, *, /, %);
* "Operador relacional." (<, >);
* "Operador logico." (!);
* "Outro simbolo valido em C." (&, =, ", ', parênteses e chaves);
* "Caractere nao identificado."

Faça um programa (main) que chame a função 3 vezes.

For example:

| Input | Result |
| --- | --- |
| < <br> $ <br> ) | Operador relacional. <br> Caractere nao identificado. <br> Outro simbolo valido em C. |
| > <br> * <br> ( | Operador relacional. <br> Operador matematico. <br> Outro simbolo valido em C. |

# Aula 5 - Repetições

## Exercicio 1

Desenvolva  uma função que receba como parâmetro um número inteiro N. A função deve ler "n" valores do teclado e retornar quantos destes valores são negativos. Crie também uma função principal (main) que leia um número inteiro do teclado, chame a função desenvolvida e imprima o resultado.

For example:

| Input | Result |
| --- | --- |
| 5 <br> -4.2 <br> 5 <br> 10.7 <br> -10.5 <br> 7.1 | Total de números negativos: 2 |
| 3 <br> 10 <br> 5 <br> 25 | Total de números negativos: 0 |

## Exercicio 2

Para resolver este exercício, siga os passos abaixo:

Escreva uma função que receba os valores inteiros n1, n2 e x como parâmetro, e imprima os múltiplos de x que pertencem ao intervalo fechado entre n1 e n2, em ordem crescente.

Escreva uma função principal (main) que ​leia​ os valores inteiros n1, n2 e x. Por fim, chame a função desenvolvida no item anterior.

Dica: intervalo fechado inclui-se os extremos.

For example:

| Input | Result |
| --- | --- |
| -10 10 5 | -10 -5 0 5 10 |
| 1 30 7 | 7 14 21 28 |
| 1 100 13 | 13 26 39 52 65 78 91 |

## Exercicio 3

Escreva uma função que receba como parâmetros as coordenadas cartesianas (X, Y) e imprima em qual quadrante este par ordenado está.

Escreva uma função principal (main) que leia as coordenadas cartesianas de uma sequência de pontos e chame a função anterior para cada um deles. O programa deverá realizar a leitura até que seja digitado o valor 0 (zero) em pelo menos uma das coordenadas do par (ex: (0,2), (3,0), (0,0)).
For example:

| Input| Result |
| --- | --- |
| 2 2 <br> 3 -2 <br> -8 -1 <br> -7 1 <br> 0 2 | Primeiro <br> Quarto <br> Terceiro <br> Segundo |
| -4 -7 <br> -7 -7 <br> -1 -2 <br> -2 0 | Terceiro <br> Terceiro <br> Terceiro |

## Exercicio 4

Faça uma função que recebe um valor N inteiro e que, se N for positivo, a função deve imprimir a mensagem , "Fatorial calculado:" e retornar o fatorial de N (N!). 

Se não for possível calcular o fatorial, a função deve imprimir mensagem, "Fatorial não pode ser calculado:" e retornar o valor -1.

Faça um programa principal que leia um valor inteiro, chame a função anterior e imprima o valor retornado.

For example:

| Input | Result |
| --- | --- |
| 5 | Fatorial calculado: 120 |
| -10 | Fatorial não pode ser calculado: -1 |

## Exercicio 5

Escreva uma função que leia 6 números reais e imprima quantos são positivos e a média dos valores positivos. Caso nenhum valor positivo seja lido, imprima a mensagem "Nao foram informados numeros positivos".

Escreva uma função principal (main) que chame a função anterior.

For example:

| Input | Result |
| --- | --- |
| -2 <br> -1 <br> 0 <br> 1 <br> 2 <br> 3 | 3 numeros sao positivos e a media e 2.00 |
| -1 <br> -10.5 <br> -100.9 <br> -1000 <br> -10000 <br> -100000 | Nao foram informados numeros positivos |

## Exercicio 6

Escreva um programa que leia dez valores do teclado (usando a mesma variável) e imprima as posições do maior e do menor na sequência.

For example:

| Input | Result |
| 3 <br> -2 <br> 9 <br> 2 <br> 7 <br> -5 <br> 8 <br> 5 <br> 2 <br> 3 | O 3o elemento é o maior. <br> O 6o elemento é o menor. |
| 1 <br> 2 <br> 3 <br> 4 <br> 5 <br> 6 <br> 7 <br> 8 <br> 9 <br> 10 | O 10o elemento é o maior. <br> O 1o elemento é o menor. |

# Aula 6 - Vetores Numéricos

## Exercicio 1

Faça um programa que leia do teclado um vetor de inteiros de 10 elementos. A seguir imprima somente os valores em índices pares do vetor.
For example:

| Input | Result |
| --- | --- |
| 0 <br> 1 <br> -4 <br> 100 <br> 9 <br> 0 <br> 9 <br> 13 <br> 7 <br> 9 | 0 <br> -4 <br> 9 <br> 9 <br> 7 | 
| -1 <br> -2 <br> -3 <br> -4 <br> -5 <br> -6 <br> -7 <br> -8 <br> -9 <br> -10 | -1 <br> -3 <br> -5 <br> -7 <br> -9 |

## Exercicio 2

Faça um programa que leia do teclado um vetor de inteiros de 7 elementos. A seguir substitua todos os números maiores que 5 pelo valor -5. Por fim, imprima o vetor modificado.
For example:

| Input	| Result |
| --- | --- |
| 0 <br> 1 <br> -4 <br> 100 <br> 9 <br> 0 <br> 9 | 0 <br> 1 <br> -4 <br> -5 <br> -5 <br> 0 <br> -5 | 
| -1 <br> -2 <br> -3 <br> -4 <br> -5 <br> -6 <br> -7 | -1 <br> -2 <br> -3 <br> -4 <br> -5 <br> -6 <br> -7 |

## Exercicio 3

Faça um programa que leia do teclado um vetor de reais de 12 elementos. A seguir, calcule e imprima a média dos valores no intervalo fechado [-3,3] do vetor.

For example:

| Input	| Result |
| --- | --- |
| -1.4 <br> 3.6 <br> 2.9 <br> 1.6 <br> 10.2 <br> -7.9 <br> 0.0 <br> -5.6 <br> 3.0 <br> 13.8 <br> -0.1 <br> 6.7 | Media dos elementos no intervalo: 1.0 |
| -1.4 <br> 3.6 <br> 8.9 <br> -12.6 <br> 10.2 <br> -1.9 <br> 0.0 <br> -3.0 <br> -8.8 <br> 13.8 <br> 0.1 <br> 6.7 | Media dos elementos no intervalo: -1.2 |

## Exercicio 4

Escreva uma função que receba um vetor de valores reais e seu tamanho e retorne quantos destes valores são negativos. Além disso, crie uma função principal (main) que leia um tamanho para o vetor, preencha o vetor e imprima utilizando a função.

OBS: O tamanho máximo do vetor será de 20 elementos.

For example:

| Input	| Result |
| --- | --- |
| 5 <br> 12.2 <br> 98.2 <br> -12.1 <br> 23.0 <br> -12.1 | 2 |
| 10 <br> 10.00 <br> 12.00 <br> -10.00 <br> 1.00 <br> 25.00 <br> 92.00 <br> -110.00 <br> 9.00 <br> 15.00 <br> -7.00 | 3 |

## Exercicio 5

Escreva uma função que receba um vetor de valores reais e um número inteiro indicando a quantidade de valores. A função deve ler valores do teclado para preencher todo o vetor, mas o valor 0 e valores negativos devem ser ignorados, bem como valores a mais que a quantidade solicitada.

Faça um programa que declare um vetor de até 20 elementos e leia a quantidade de valores positivos a serem lidos. Utilize a função criada para preencher o vetor e imprima o vetor resultante.

For example:

| Input	| Result |
| --- | --- |
| 4 -1 2 3 1 -3 5 | 2.00 3.00 1.00 5.00 |
| 3 -1.1 0 3.3 22 4 5 | 3.30 22.00 4.00 |

## Exercicio 6

Faça um programa que apague um elemento no meio de um vetor, de forma que os elementos posteriores a posição deletada sejam deslocados para a esquerda. Assim:

(1) crie um vetor de 20 posições;
(2) preencha cada posição do vetor com seu índice;
(3) solicite que o usuário indique uma posição x entre 0 e 10. A leitura deve ser repetida até que o usuário digite um valor válido;
(4) desloque os elementos das posições de x+1 a 19 para a esquerda;
(5) Imprima os elementos do vetor de 0 a 19.

For example:

| Input	| Result |
| --- | --- |
| 0 | Sequencia: <br> 1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19 |
| -5 <br> 11 <br> 22 <br> 7 | Sequencia: <br> 0  1  2  3  4  5  6  8  9  10  11  12  13  14  15  16  17  18  19 |

# Aula 7 - Strings

## Exercicio 1

1 - Fazer uma função para imprimir uma string recebida como parâmetro sem os espaços em branco. Para isso, a string não deve ser modificada.

2 - Fazer uma função principal que leia uma string de até 50 caracteres e chame a função do item anterior.

For example:

| Input	| Result |
| --- | --- |
| Exemplo Um | ExemploUm |
| Algoritmos | Algoritmos |

## Exercicio 2

Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que trocava cada letra pelo equivalente em duas posições adiante no alfabeto (por exemplo, 'A' vira 'C', 'R' vira 'T', etc.). Ao final do alfabeto nós voltamos para o começo, isto é 'Y' vira 'A'. Nós podemos, é claro, tentar trocar as letras com quaisquer número de posições.

Entrada: A entrada contém vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste é composto por duas linhas. A primeira linha contém uma string com até 50 caracteres maiúsculos ('A'-'Z'), que é a sentença que se deseja codificar através desta Cifra de César modificada. A segunda linha contém um número que varia de 0 a 25 e que representa quantas posições cada letra deverá ser deslocada para a direita.

Saída: Para cada caso de teste de entrada, imprima uma linha de saída com o texto codificado (aplicando as regras de criptografia) conforme as regras acima e o exemplo abaixo.

For example:

| Input	| Result |
| --- | --- |
| 1 <br> HELLOWORLD <br> 4 | LIPPSASVPH |

## Exercicio 3

Elabore uma função que receba uma string e um caractere e remova toda ocorrência do caractere na string.

Elabore um programa principal que leia uma string (máximo de 60 caracteres), chame a função anterior e imprima a string modificada.

For example:

| Input	| Result |
| --- | --- |
| katon goukakyuu no jutsu <br> u | katon gokaky no jts |
| abcedacdea <br> a | bcedcde |

# Aula 8 - Matrizes

## Exercício 1

Elabore uma função que receba uma matriz de números inteiros de tamanho 20x20 e um valor inteiro X. A função deve percorrer a matriz, linha por linha, e procurar a primeira ocorrência de X. Caso X seja encontrado, a função deve imprimir a localização (linha e coluna) dessa ocorrência. Caso contrário, deve imprimir a mensagem "nao encontrado".

Elabore um programa principal que leia uma matriz de inteiros de tamanho 20x20, um valor inteiro X e chame a função do item anterior.

For example:

| Input | Result |
| --- | --- |
| 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br>88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 80 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 88 <br> 80 | Linha: 8 Coluna: 9 |
| 2 -35 -64 84 56 -52 89 9 -62 -56 87 85 63 11 29 64 45 85 90 -33 <br> 82 85 90 -10 16 47 78 1 -14 -56 -10 68 -25 86 -18 73 36 -26 72 34 <br> -28 71 -38 -64 58 -30 21 76 -90 12 66 -57 41 -100 2 -59 -65 98 1 -16 <br> 77 94 -49 -100 19 32 13 76 91 15 -38 -16 -89 -68 54 -94 -54 -35 36 84 <br> -99 22 -46 -79 -73 -99 87 -17 12 -24 -54 72 -49 -84 -15 -87 67 -52 -80 53 <br> -37 10 42 -29 -23 73 -13 -86 -72 -87 -49 -22 -100 65 90 74 -39 -61 -37 -15 <br> 89 -10 37 9 -74 -74 91 -32 25 51 6 28 24 93 -13 -3 -11 33 -74 -53 <br> -50 67 -55 58 50 51 -38 76 8 73 95 22 -10 13 -28 35 -96 65 -35 -68 <br> 42 69 2 29 80 12 0 41 61 45 74 -11 -8 7 79 -83 -1 -82 -19 -46 <br> -81 -85 46 -58 7 96 -52 -71 -61 -30 -68 -88 -29 54 -78 -88 -58 3 32 -58 <br> -12 43 -38 -96 -47 -65 -29 -68 8 70 -52 44 11 89 -29 -21 -73 -60 -25 4 <br> 37 -28 8 49 38 85 38 -30 28 57 95 -88 -74 73 61 -9 -86 -90 16 48 <br> 8 97 -51 95 16 89 -68 11 77 5 69 -2 -97 -74 35 -23 -43 -88 -53 80 <br> -54 28 -13 60 -55 -54 6 66 -36 -91 32 67 6 99 -29 62 -99 -68 -37 11 <br> -100 56 89 15 -33 -76 -77 -62 -27 35 48 -39 20 -52 41 5 -53 -79 -88 3 <br> -92 57 -50 0 -72 42 30 -85 22 -97 -2 94 -80 -31 88 -99 -23 50 -90 8 <br> -18 35 -77 -24 7 -24 87 -42 -2 -11 79 92 -29 70 88 -73 -24 -55 36 -56 <br> -63 -77 1 -49 -25 -6 91 -43 95 81 6 31 -16 -11 14 93 -39 56 64 57 <br> -79 78 29 -31 -78 68 30 92 -90 79 53 -23 -66 80 58 81 -8 84 -22 -91 <br> -79 78 29 -31 -78 68 30 92 -90 79 53 -23 -66 80 58 81 -8 84 -22 -91 <br> 80 -64 -90 -20 89 -79 50 7 -66 88 47 -66 -44 38 48 59 38 58 10 -42 <br> 100 | nao encontrado |

## Exercicio 2

Para resolver este exercício, siga os passos abaixo:

* Escreva uma função que receba por parâmetro uma matriz de três linhas e quatro colunas de números inteiros e a imprima.
* Escreva uma função para calcular a multiplicação de uma matriz de números inteiros com três linhas e quatro colunas por um escalar inteiro, recebidos por parâmetro. O resultado deve ser armazenado na própria matriz.
* Escreva uma função principal (main) que leia do teclado uma matriz de dimensão 3x4 e um escalar e chame as funções desenvolvidas nos itens anteriores.

For example:

| Input | Result |
| --- | --- |
| 2 2 2 2 <br> 2 2 2 2 <br> 2 2 2 2 <br> 3 | Escalar: 3 <br> Matriz Final: <br> 6 6 6 6 <br> 6 6 6 6 <br> 6 6 6 6 |
|1 2 3 4 <br> 2 1 4 1 <br> 0 1 3 2 <br> 2 | Escalar: 2 <br> Matriz Final: <br> 2 4 6 8 <br> 4 2 8 2 <br> 0 2 6 4 |

## Exercicio 3

Dado um inteiro N, siga os passos abaixo:

Escreva uma função que receba como parâmetro uma matriz quadrada de inteiros A e seu tamanho. Troque o primeiro valor ímpar da primeira linha de A com o primeiro elemento par da diagonal secundária de A. Por fim, se houve troca, imprima A. Caso contrário, imprima "Nenhuma troca realizada".

Escreva uma função principal (main) que declare e leia o tamanho de A e os elementos de A. Chame a função anterior.

OBS: Considere que o tamanho máximo da matriz será 5.

For example:

| Input | Result |
| --- | --- |
| 5 <br> 74 44 24 86 74 <br> 8 24 55 48 27 <br> 37 57 59 36 15 <br> 43 55 29 51 13 <br> 62 3 76 47 35 | Nenhuma troca realizada |
| 3 <br> 1 2 3 <br> 1 2 3 <br> 1 2 3 | 2 2 3 <br> 1 1 3 <br> 1 2 3 |
| 4 <br> 2 4 5 7 <br> 2 3 4 5 <br> 7 8 4 5 <br> 3 5 1 8 | 2 4 4 7 <br> 2 3 5 5 <br> 7 8 4 5 <br> 3 5 1 8 |

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

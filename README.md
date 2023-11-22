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

    Input	                    Result
///////////////////////////////////////////////////////////////
///  30  /// Diferenca entre a pressao desejada e lida: 12  ///
///  18  ///                                                ///
///////////////////////////////////////////////////////////////
///  27  /// Diferenca entre a pressao desejada e lida: -3  ///
///  30  ///                                                ///
///////////////////////////////////////////////////////////////

## Exercício 2

Escreva um algoritmo que leia três números inteiros e positivos (A, B, C), calcule e imprima D com base em R e S:

R = (A + B)2
S = (B + C)2
D = (R + S)/2
For example:

    Input	     Result
////////////////////////////
///  0 0 0  ///  D = 0   ///
////////////////////////////
///  1 2 3  ///  D = 17  ///
////////////////////////////

## Exercício 3

Leia os quatro valores correspondentes às coordenadas x e y de dois pontos quaisquer no plano, p1 = (x1,y1) e p2 = (x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia = √(x2−x1)^2+(y2−y1)^2

Entrada:

A entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante (float): x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída:

A saída deve conter o texto "Distancia:" seguido por um espaço e pela distância calculada com 4 casas após o ponto decimal.

For example:

      Input	              Result
///////////////////////////////////////////
///  1.0 7.0   ///  Distancia: 4.4721   ///
///  5.0 9.0   ///                      ///
///////////////////////////////////////////
///  -2.5 0.4  ///  Distancia: 16.1484  ///
///  12.1 7.3  ///                      ///
///////////////////////////////////////////

# Aula 3 - Funções

## Exercício 1

Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro o raio de um círculo e retorne a área deste. Utilize pi = 3.141592.
Escreva uma função principal (main) que leia um valor real do teclado, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido.
For example:

    Input	            Result
///////////////////////////////////////////////
///  10  ///  Área do círculo: 314.16 cm2.  ///
///////////////////////////////////////////////
///  2   ///  Área do círculo: 12.57 cm2.   ///
///////////////////////////////////////////////

## Exercício 2

Uma loja proporciona ao seus clientes um desconto de 10% para pagamentos à vista independente do valor total da compra.

Escreva uma função que receba como parâmetro o valor total de uma compra e retorne o valor para pagamento à vista (com 10% de desconto).
Escreva uma função principal (main) que leia o valor da compra digitado pelo usuário, chame a função anterior e imprima o valor para pagamento à vista.
For example:

    Input	                Result
////////////////////////////////////////////////////
///  100    ///  O valor a vista eh de R$ 90.00  ///
////////////////////////////////////////////////////
///  81.50  ///  O valor a vista eh de R$ 73.35  ///
////////////////////////////////////////////////////

## Exercício 3

Para resolver este exercício, siga os passos abaixo:

Escreva uma função que receba como parâmetro um tempo expresso em segundos e imprima na tela esse mesmo tempo e horas, minutos e segundos.
Escreva uma função principal (main) que leia um valor inteiro do teclado e chame a função desenvolvida no item anterior.
For example:

     Input	                        Result
///////////////////////////////////////////////////////////////////
///  13579  ///  Conversão: 3 horas, 46 minutos e 19 segundos.  ///
///////////////////////////////////////////////////////////////////
///  72000  ///  Conversão: 20 horas, 0 minutos e 0 segundos.   ///
///////////////////////////////////////////////////////////////////


# Aula 4 - Condicionais

## Exercício 1

Faça uma função que receba como parâmetro um valor inteiro. Esta função deve retornar 1 se o valor recebido como parâmetro for par e positivo e, caso contrário, a função deve retornar 0.

Crie um programa que leia um valor inteiro,  chame a função criada e imprima a mensagem “Conjunto Z*+ e par” caso o valor retornado pela função seja igual a 1, caso contrário o programa deve imprimir “Valor invalido”.

For example:

    Input	         Result
//////////////////////////////////////
///  2    ///  Conjunto Z*+ e par  ///
//////////////////////////////////////
///  148  ///  Conjunto Z*+ e par  ///
//////////////////////////////////////
///  -2   ///  Valor invalido      ///
//////////////////////////////////////
///  3    ///  Valor invalido      ///
//////////////////////////////////////


## Exercicio 2

Faça uma função que receba como parâmetro  dois números reais e um caractere: ' + ', ' - ', ' * ' ou ' / '. A função deve imprimir o resultado da operação efetuada sobre os números lidos.
 
Lembre-se que divisão por 0 não existe, portanto imprima a mensagem "ERRO: Divisao por Zero" caso não seja possível efetuar um cálculo.
 
Faça também um programa (main) para ler o caractere e os números e chamar a função feita.
For example:

    Input	   Result
//////////////////////////
///   /   ///  0.6667  ///
///   2   ///          ///
///   3   ///          ///  
//////////////////////////
///   +   ///  5.7000  ///
///  2.5  ///          ///
///  3.2  ///          ///
//////////////////////////


## Exercício 3

Desenvolva a função classificaCaractere que lê um caractere e imprime uma das seguintes mensagens:

* "Operador matematico." (+, -, *, /, %);
* "Operador relacional." (<, >);
* "Operador logico." (!);
* "Outro simbolo valido em C." (&, =, ", ', parênteses e chaves);
* "Caractere nao identificado."

Faça um programa (main) que chame a função 3 vezes.

For example:

Input	Result
/////////////////////////////////////////////
///  <  ///  Operador relacional.         ///
///  $  ///  Caractere nao identificado.  ///
///  )  ///  Outro simbolo valido em C.   ///
/////////////////////////////////////////////
///  >  ///  Operador relacional.         ///
///  *  ///  Operador matematico.         ///
///  (  ///  Outro simbolo valido em C.   ///
/////////////////////////////////////////////






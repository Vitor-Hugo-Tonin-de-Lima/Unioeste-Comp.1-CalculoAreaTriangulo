#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int coordenadas[3][3];		//Matriz para armazenar os valores
	double resultado;			//Variavel para armazenar o resultado da operação
	
	//Loop para o usuário inserir o valor de cada ponto individualmente
	for(int i=0;i<3;i++){
		printf("Digite as coordenadas do vertice %d: ",i+1);
		scanf("%d%d",&coordenadas[1][i],&coordenadas[2][i]);
		coordenadas[3][i] = 1;
	}
	
	//Calculo da determinante da matriz
	resultado = (coordenadas[1][1] * coordenadas[2][2] + coordenadas[1][2] * coordenadas[2][3] + coordenadas[1][3] * coordenadas[2][1] - 
				(coordenadas[1][3] * coordenadas[2][2] + coordenadas[1][2] * coordenadas[2][1] + coordenadas[1][1] * coordenadas[2][3]));
				
	//Calculo do restante da operação
	resultado = (abs(resultado))/2;
	
	//Impressão do resultado
	printf("A area do triangulo e de: %lf",resultado);
	
	return 0;
}

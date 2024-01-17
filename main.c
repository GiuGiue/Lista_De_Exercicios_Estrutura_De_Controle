#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ex1()
{
	/*Escrever um programa que leia dois valores inteiros e 
	independentemente da ordem em que foram entrados, 
	eles devem ser impressos na ordem crescente, ou seja, 
	se forem fornecidos 5 e 3, respectivamente, devem ser apresentados 3 e 5.*/
	
	//var
	int n1;
	int n2;
	
	//entrada de dados
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	//processamento e saída de dados
	if(n1 > n2)
	{
		printf("%d , %d\n", n2, n1);
	}
	else
	{
		printf("%d , %d\n", n1, n2);
	}	

}

void ex2()
{
	/*Faça um programa que receba duas notas e exibe se o aluno foi 
	aprovado caso a média das notas seja maior ou igual a 6,0. 
	Caso contrário exiba a mensagem que o aluno fará recuperação.*/
	
	//var
	float nota1;
	float nota2;
	float media;
	
	//entrada
	printf("escreva a primeira nota: ");
	scanf("%f", &nota1);
	printf("Escreva a segunda nota: ");
	scanf("%f", &nota2);
	
	//processamento e saída
	media = nota1+nota2;
	if(media >= 6)
	{
		printf("Sua nota eh %.2f. Voce esta aprovado!\n", media);
	}
	else
	{
		printf("Sua nota eh %.2f. Voce esta reprovado!\n", media);
	}

}

void ex3()
{
	//Escreva um algoritmo que receba a idade do usuário e escreva se o usuário pode dirigir ou não.

	//var
	int idade;
	int maiorDeIdade = 18;
	
	//entrada
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	//processamento e saída
	if(idade >= maiorDeIdade)
	{
		printf("Voce pode dirigir.\n");
	}
	else
	{
		printf("Voce nao pode dirigir.\n");
	}
}

void ex4()
{
	/*Elabore um algoritmo que receba a idade de uma pessoa e informa 
	se ela pode votar, se o voto é facultativo ou obrigatório. 
	De acordo com STE, menos de 16 anos não votam, menores de 
	18 anos e acima de 65 anos é facultativo e de 18 a 65 anos é obrigatório.*/
	
	//var
	int idade;
	
	//entrada de dados
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	
	//processamento e saída
	if((idade >= 18) && (idade <= 65))
	{
		printf("O voto eh obrigatorio.\n");
	}
	else if((idade >= 16) && (idade <= 17))
	{
		printf("O voto eh opcional.\n");
	}
	else
	{
		printf("Voce nao pode votar!\n");
	}
}


int main(int argc, char *argv[]) {
	ex1();
	ex2();
	ex3();
	ex4();
	return 0;
}

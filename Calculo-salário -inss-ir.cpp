#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario_base, inss, ir, salario_liquido;
	
	printf("Digite o salário bruto: ");
	scanf("%f", &salario_base);
	
	//Cálculo INSS
	if (salario_base <= 1693.72) {
		inss = salario_base * 0.08;
	} else if (salario_base >= 1693.73 && salario_base <= 2822.90){
		inss = salario_base * 0.09;
	} else if (salario_base >= 2822.91 && salario_base <= 5646.80){
		inss = salario_base * 0.11;
	} else if(salario_base >= 5646.81){
		inss = salario_base - 621.04;
	}
	
	salario_liquido = salario_base - inss;
	
	printf("Desconto Inss: R$%.2f", inss);
	printf("\n Salario Liquido: R$%.2f", salario_liquido);
	
	
	return 0;
}

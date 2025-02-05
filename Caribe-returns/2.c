/*2. Construa uma função que receba o salário e categoria de um funcionário,
se a categoria for = “m” de mensalista, conceder 10% de aumento e retorne o valor reajustado,
se for = “h” de horista, conceder 20% de aumento e retorne o valor reajustado, se não for “m” nem “h”, 
exibir a mensagem categoria inválida e retorne o valor -1 (utilize o comando switch).*/

#include <stdio.h>
float reajuste(float salario, char categ);

int main(void)
{
    float salario;
	char categ;
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
    
	printf("Digite a categoria do funcionario (h pra horista ou m para mensalista): ");
	scanf(" %c", &categ);

	printf("Salario Reajustado: R$%.2f\n", reajuste(salario, categ));
    return 0;
}
float reajuste(float salario, char categ){
	switch (categ)
	{
	case 'm':
		salario += salario * 0.1; 
		break;	
	case 'h':
		salario += salario * 0.2;
		break;
	default:
		printf("Categoria Invalida!!\n");
		return -1;
		break;
	}
	return salario;
}
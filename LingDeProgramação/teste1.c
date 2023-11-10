 #include <stdio.h>
int main() {
	char x;
	float valor,desc, total;
	printf("\n Digite o valor da compra \n");
	scanf("%f", &valor);
	printf("\n Digite a letra que representa o seu desconto de acordo com a cor\n");
	printf("a. azul\n");
	printf("v. vermelho\n");
	printf("b. branco\n");
	printf(" Digite sua opcao:");
	scanf("%s", &x);
	switch(x)
	{
	case 'a':
		printf("Voce escolheu azul, seu desconto sera de 30 por cento \n");
		desc=valor*0.30;
		total=valor-desc;
		printf("O valor da sua compra e %.2f\n", total);
		break;
	case 'v':
		printf("Voce escolheu vermelho, seu desconto sera de 20 por cento \n");
		desc=valor*0.20;
		total=valor-desc;
		printf("O valor da sua compra e %.2f\n", total);
		break;
	case 'b':
		printf("Voce escolheu branco, seu desconto sera de 10 por cento \n");
		desc=valor*0.10;
		total=valor-desc;
		printf("O valor da sua compra e %.2f\n", total);
		break;
	default:
		printf("opcao invalida\n");
	}
return 0;
}
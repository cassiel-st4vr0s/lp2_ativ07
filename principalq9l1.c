int main(void)
{
	float a, b, c;
	float delta, x1, x2;
 
	printf("Entre com as variaveis da equacao de segundo grau ax^2 + bx + c:\n\n");
	printf("a = "); 
	scanf("%f", &a);	
	printf("b = "); 
	scanf("%f", &b);

	printf("c = "); 
	scanf("%f", &c);

	printf("\nf(x) = %.2fx^2 + %.2fx + %.2f\n", a, b, c);

	delta = calc_delta(a,b,c);
	
	if(delta < 0)
	{
		printf("Delta = %.2f\nNao possui raizes reais!\n", delta);
	}
	else
	{
		if(delta == 0)
		{
			x1 = calc_x1(a,b, 0);
			printf("Delta = %.2f \nx'   = %.2f\n", delta, x1);
		}
		else
		{
 		x1 = calc_x1(a,b,delta);
 		x2 = calc_x2(a,b,delta);
            
		printf("Delta = %.2f \nx'   = %.2f\nx''  = %.2f\n", delta, x1, x2);
	        }
	}
   	
   	return 0;
}


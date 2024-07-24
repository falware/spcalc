#include <stdio.h>


/* global */
float result, num1, num2;


/* func aritmeticas */
float add(float a, float b)
{
	return a + b;
}

float sub(float a, float b)
{
	return a - b;
}

float _div(float a, float b)
{
	return a / b;
}

float multp(float a, float b)
{
	return a * b;
}

/* input data */
void read_number()
{
	scanf("%f%f%*c", &num1, &num2);
}


/* init */
int main()
{

	char c;
	
	printf("[a] adicao; [s] subtracao; [d] divisao; [m] multiplicao; [q] sair\n");

	while ((c = getchar()) != 'q') {
		

		if(c != 'a' && c != 's' && c != 'd' && c != 'm' && c != 'q') {

			printf("entrada invalida: (%c)\n", c);
			
		} else {

			switch(c) {
			case 'a':
			
				read_number();
				result = add(num1, num2);
				printf("result: %.2f\n", result);
				break;

			case 's':

				read_number();
				result = sub(num1, num2);
				printf("result: %.2f\n", result);
				break;
			
			case 'd':
				
				read_number();
				result = _div(num1, num2);
				printf("result: %.2f\n", result);
				break;
			case 'm':
				
				read_number();
				result = multp(num1, num2);
				printf("result: %.2f\n", result);
				break;
			}
		}
	}
	
	return 0;
}

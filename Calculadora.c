#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2)
{
	int sum;
	sum= num1 + num2;
	return sum;
}

int resta(int num1, int num2)
{
	int res;
	res= num1 - num2;
	return res;
}

int multiplicacion(int num1, int num2)
{
	int mult;
	mult= num1*num2;
	return mult;
}

int division(int num1, int num2)
{
	int division;
	division= num1 / num2;
	return division;
}


int main (int argc, char** argv)
{
	int result;
	int num1= atoi(argv[1]);
	char* operacion= argv[2];
	int num2= atoi(argv[3]);
	if (*operacion=='+')
	{
		result= suma(num1,num2);
		printf("El resultado de tu suma es: %d \n", result);
	}
	else {
		if(*operacion=='-'){
		result= resta(num1,num2);
		printf("El resultado de tu resta es: %d \n", result);
					}
		else {
			if(*operacion=='x'){
				result= multiplicacion(num1,num2);
				printf(" El resultado de tu multiplicacion es: %d \n", result);
							}
			 else {
					if(*operacion=='/') {
					result= division(num1,num2);
					printf("El resultado de tu division es: %d \n", result);
									}
					 else {
						printf("Solo se pueden realizar operaciones básicas");
						  }
					}
			}
		}
	return 0;
}

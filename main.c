#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	float a;
	float b;
	
	printf("enter a numerator : ");
	scanf("%f", &a);
	
	printf("enter a denominator : ");
	scanf("%f", &b);
	
	printf("The result of devision ( %f / %f ) is %f\n", a, b, (float)a/b);
	
	system("PAUSE");
	return 0;
}

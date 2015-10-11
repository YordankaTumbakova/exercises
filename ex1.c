// Exercise 1-3 from page 16
// Modify the temperature conversion program to print a heading above the table.

#include <stdio.h> 
int main() 
{	
	float fahr, celsius; float lower, upper, step; lower = 0;
	upper = 300; 
	step = 20; 
	fahr = lower; 
	
	printf("Temperature conversion table:\nF      C\n\n");
	
	while (fahr <= upper)
	{ 
		celsius = (5.0/9.0) * (fahr-32.0); 
		printf("%3.0f %6.1f\n", fahr, celsius); 
		fahr = fahr + step; 
	} 
   return 0;
}

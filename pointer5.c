//Akif 
#include <stdio.h>
int main(){
	int a,b; // a and b are variables
	int *pa,*pb; // pointer to int
	
	pa=&a; pb=&b; //assigning the address of a and b to pa and pb respectively.
	
	printf("Enter first integer: "); //
	scanf("%d",pa); // pa is the address of a, so pa is the same as &a
	printf("Enter second integer: "); //
	scanf("%d",pb); //
	
	//compare 
	if(*pa==*pb)
		printf("1\n");
	else
		printf("0\n");
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <hellomake.h>


#define MAX 100
int esPalindromo(char *palabra);

int main(){
	// call a function in another file
	myPrintHelloMake();
	char line[MAX];
	printf("Input a word to check if it's a polindrome: ");
	scanf("%s",line);
	printf("Is palindrome? ");
	printf((esPalindromo(line))?"true\n":"false\n");
	return 0;
}

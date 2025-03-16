#include <stdio.h>

int main () {
	char uppercase;
	printf("Enter uppercase: ");
	scanf(" %c" , &uppercase);
	while (uppercase < 'A' || uppercase > 'Z');
	 char lowercase = uppercase +32;
	printf("the lowercase is %c\n: ",lowercase);
	return 0;
}


#include <stdio.h>
int main() {
	char lowercase;
	printf("enter the lowercase: ");
	scanf(" %c", &lowercase);
	while(lowercase < 'a' || lowercase > 'z');
	char uppercase = lowercase - 32;
	printf("the uppercase is %c\n:", uppercase);
	return 0;
}


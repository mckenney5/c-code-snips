#include <stdio.h>
#include <stdlib.h>
long long factorial(const long num){
/* Factorial is n * (n!-1) */
	if(num == 0)
		return 1;
	else
		return (num * factorial(num-1)); //calls the function recursively
}

int main(int argc, char *argv[]){
	if(argc == 2)
		printf("%s! = %lld\n", argv[1], factorial(atol(argv[1])));
	else 
		printf("Usage: %s <number>\n", argv[0]);
	return 0;
}


/* Sorts single digits from command line args */
/* Addapted from the qsort man pages from GNU */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int cmpstring(const void *p1, const void *p2){
	return strcmp(* (char * const *) p1, * (char * const *) p2);
}

int main(int argc, char *argv[]){
	if(argc < 2) return 1;
	qsort(&argv[1], argc-1, sizeof(char*), cmpstring);
	size_t i;
	for(i=1; i < argc; i++)
		printf("%s ", argv[i]);
	putchar('\n');
	return 0;
}


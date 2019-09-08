#include <stdio.h>
#include <string.h>
int main(){
	FILE *fp;
	char page[1024] = {0};
	fp = fopen("test.txt", "r");
	if(fp == NULL){ perror(" "); return 1; }
	size_t i;
	for(i=0; i<1024; i++){
		page[i] = fgetc(fp);
		if(page[i] == EOF) break;
	}
	page[i] = '\0';
	fclose(fp);
	printf("Size: '%ld'\nText: '%s'\n", strlen(page), page);

	return 0;
}


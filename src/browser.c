#include <stdio.h>
int main(int argc, char* argv[]){
	//if(argc != 3) return -1;
	if(argc == 3)
		printf("GET /%s HTTP/1.0\r\nHost: %s\r\n\r\n", argv[1], argv[2]);
	else if(argc == 2)
		printf("GET / HTTP/1.0\r\nHost: %s\r\n\r\n", argv[1]);
	else {
		perror("Syntax error, need to specify page and website, or just website");
		return -1;
	}
	return 0;
}


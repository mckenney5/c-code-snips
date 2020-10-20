#include <stdio.h>
int main(int argc, char *argv[]){
		if(argc != 2) return 1;

		switch(argv[1][0]){
				case 'a':
						puts("A!");
						break;
				case 'b':
						puts("B!");
						break;
				default:
						puts("?");
		}
		return 0;
}

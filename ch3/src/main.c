#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_256_random_numbers() {
	int i;
	int a;
	srand((unsigned int)time(NULL));
	for (i=0;i < 256;i++) {
		int a  = random();
		if(i > 0 && i % 6 == 0) {
			printf("\n");
		} 	
		printf("%d", a);
		if(i != 255) {
			printf(",");
		}
	}
}

int main(int argc, char **argv) {
	generate_256_random_numbers();
	printf("hello,world\n");
}


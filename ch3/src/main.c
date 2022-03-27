#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "atom.h"
#include "TestConfig.h"

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
	const char *a1;
	// generate_256_random_numbers();
	printf("hello,world\n");
	printf("Test_VERSION_MAJOR: %d\n", Test_VERSION_MAJOR);

    a1 = Atom_string("hello");


	printf("a1 = %s, len = %d\n", a1, Atom_length(a1));

	Atom_free("hello");
}

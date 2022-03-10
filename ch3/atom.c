#include <string.h>
#include <limits.h>
#include "assert.h"
#include "atom.h"

const char Atom_string(const char *str) {
	assert(str);
	return Atom_new(str, strlen(str));
}


const char Atom_int(long n) {
	char str[43];
	// 指针指向数组的最后一个元素后面
	char *s = str + sizeof(str);
	unsigned long m;

	if (n == LONG_MIN) {
		m = LONG_MAX + 1UL;
	} else if (n < 0) {
		m = -n;
	} else {
		m = n;
	}

	// 把数字倒序存入字符数组中
	do {
		*--s = m%10 + '0';
	} while((m / 10) > 0)

	return Atom_new(s, (str + sizeof str) - s);
}

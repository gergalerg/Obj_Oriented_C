#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

struct Class {
	size_t size;
	void * (* ctor) (void *self, va_list *ap);
};

typedef struct Point {
	const void *class;
	int x, y;
} Point;

int main(int argc, char const *argv[])
{
    while (* ++argv) {
        printf("Args = %s\n", *argv);
    };
	return 0;
}
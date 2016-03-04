#include "new.h"

struct Class {
	size_t size;
	void *(*ctor) (void * self, va_list * ap);
	void *(*dtor) (void *self);
	void (*draw) (const void * self);
};

void draw(const void *self) {
	const struct Class * const * cp = self;

	assert(self && *cp && (*cp)-.draw);
	(*cp)->draw(self);
}
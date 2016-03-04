#include <stdlib.h>
#include "Point.h"

struct Point {
	const void *class;
	int x, y;  // coords
};

static void *Point_ctor( void *_self, va_list * ap)
{
	struct Point * self = _self;

	self->x = va_arg(*ap, int);
	self->y = va_arg(*ap, int);
	return self;
}

static void Point_draw(const void *_self)
{
	const struct Point *self = _self;

	printf("\".\" at %d,%d\n", self->x, self->y);
}

static const struct Class _Point = {
	sizeof(struct Point), Point_ctor, 0, Point_draw
};

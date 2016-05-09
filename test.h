#include <stdarg.h>

struct Class {
    size_t size;
    void * (* ctor) (void *self, va_list *ap);
    void *(*dtor)(void *self);
    void (*Point_draw)(const void *_self);
};

typedef struct Point {
    const void *class;
    int x, y;
} Point;

void *new(const void *class, ...);
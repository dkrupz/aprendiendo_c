#include <stdlib.h>

typedef struct {
    double d;
    int i;
    char c[10];
}
widget;

widget *p = malloc(sizeof *p);
if (p == nullptr) {
    // handle allocation error
}
// continue processing

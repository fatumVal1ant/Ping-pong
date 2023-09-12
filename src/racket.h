#ifndef RACKET_H
#define RACKET_H

#include <stdlib.h>

typedef struct {
    int x;
    int y;
    int uy;
    int ly;
} Racket;

Racket *initRacket(const int x, const int y, const int size);
void moveRacket(Racket *racket, const int shift);
void destroyRacket(Racket *racket);

#endif
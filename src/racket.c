#include "racket.h"

Racket *initRacket(const int x, const int y, const int size) {
    Racket *racket = (Racket *)malloc(sizeof(Racket));

    racket->x = x;
    racket->y = y;

    if (size % 2 == 1) {
        racket->uy = y - (size / 2);
        racket->ly = y + (size / 2);
    } else {
        racket->uy = y - (size / 2);
        racket->ly = y + (size / 2) - 1;
    }

    return racket;
}

void moveRacket(Racket *racket, const int shift) {
    racket->y += shift;
    racket->uy += shift;
    racket->ly += shift;
}

void destroyRacket(Racket *racket) {
    if (racket != NULL) {
        free(racket);
    }
}
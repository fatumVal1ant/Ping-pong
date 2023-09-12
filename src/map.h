#ifndef MAP_H
#define MAP_H

#include <stdlib.h>

#include "ball.h"
#include "racket.h"

typedef struct {
    int height;
    int width;
    Ball *ball;
    Racket **rackets;
} Map;

Map *initMap(const int height, const int width, const int sizeRacket);
void collisionBall(Map *map);
void destroyMap(Map *map);

#endif
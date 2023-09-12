#ifndef BALL_H
#define BALL_H

#include <stdlib.h>

typedef struct {
    int x;
    int dx;
    int y;
    int dy;
} Ball;

Ball *initBall(const int x, const int y);
void moveBall(Ball *ball);
void destroyBall(Ball *ball);

#endif
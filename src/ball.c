#include "ball.h"

Ball *initBall(const int x, const int y) {
    Ball *ball = (Ball *)malloc(sizeof(Ball));

    ball->x = x;
    ball->y = y;

    ball->dx = 1;
    ball->dy = 1;

    return ball;
}

void moveBall(Ball *ball) {
    ball->x += ball->dx;
    ball->y += ball->dy;
}

void destroyBall(Ball *ball) {
    if (ball != NULL) {
        free(ball);
    }
}
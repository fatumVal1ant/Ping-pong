#ifndef PLAYER_H
#define PLAYER_H

#include "stdlib.h"

typedef struct {
    unsigned int score;
} Player;

Player *initPlayer();
void destroyPlayer(Player *player);

#endif
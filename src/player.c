#include "player.h"

Player *initPlayer() {
    Player *player = (Player *)malloc(sizeof(Player));

    player->score = 0;

    return player;
}

void destroyPlayer(Player *player) {
    if (player != NULL) {
        free(player);
    }
}
#include "game.h"

#include <stdio.h>
#include <Windows.h>

void game() {
    // Player **players = (Player **)malloc(2 * sizeof(Player *));
    // for (int i = 0; i < 2; i++) {
    //     players[i] = initPlayer();
    // }
    Map *map = initMap(25, 80, 3);
    
    renderMap(map);
    while (1) {
        collisionBall(map);
        moveBall(map->ball);
        renderMap(map);
        Sleep(150);
    }

    destroyMap(map);
    // for (int i = 0; i < 2; i++) {
    //     destroyPlayer(players[i]);
    // }
}
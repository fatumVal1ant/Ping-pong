#include "map.h"

Map *initMap(const int height, const int width, const int sizeRacket) {
    Map *map = (Map *)malloc(sizeof(Map));

    map->height = height;
    map->width = width;
    
    map->ball = initBall(map->width / 2, map->height / 2);

    map->rackets = (Racket **)malloc(2 * sizeof(Racket *));
    map->rackets[0] = initRacket(1, map->height / 2, sizeRacket);
    map->rackets[1] = initRacket(map->width - 2, map->height / 2, sizeRacket);

    return map;
}

void collisionBall(Map *map) {
    if (map->ball->y + map->ball->dy == 0 || map->ball->y + map->ball->dy + 1 == map->height) {
        map->ball->dy *= -1;
    }
    if (map->ball->x + map->ball->dx == 0 || map->ball->x + map->ball->dx + 1 == map->width) {
        map->ball->dx *= -1;
    }
}

void destroyMap(Map *map) {
    if (map != NULL) {
        destroyBall(map->ball);
        for (int i = 0; i < 2; i++) {
            destroyRacket(map->rackets[i]);
        }
        free(map);
    }
}
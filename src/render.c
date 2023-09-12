#include "render.h"

void renderMap(Map *map) {
    printf("\033[2J\033[H");
    for (int i = 0; i < map->height; i++) {
        for (int j = 0; j < map->width; j++) {
            if (i == 0 || i + 1 == map->height) {
                printf("-");
            } else if (j == 0 || j + 1 == map->width) {
                printf("|");
            } else if (j == 1 && (map->rackets[0]->uy <= i && map->rackets[0]->ly >= i)) {
                printf("#");
            } else if (j == map->width - 2 && (map->rackets[1]->uy <= i && map->rackets[1]->ly >= i)) {
                printf("#");
            } else if (i == map->ball->y && j == map->ball->x) {
                printf("O");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
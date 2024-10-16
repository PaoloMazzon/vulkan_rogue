#ifndef WORLD_H
#define WORLD_H
#include <stdint.h>

typedef struct{
  int x;
  int y;
} Pos;

typedef struct Entity Entity;
struct Entity{
  Pos pos;
  int uv;
  uint32_t fg;
  uint32_t bg;
  int collide;
  Entity* inventory;
};

typedef struct{
  Entity* tiles;
  int width;
  int size;
  Entity* props;
  Entity* actors;
  int actors_count;
} GameWorld;


int mapPutTile(GameWorld*, Entity, int, int);
Entity mapGetTile(GameWorld* map, int x, int y);
int worldInit(GameWorld*, int, int);
int entityMove_f(Entity*, int, int);
int entityAdd(GameWorld*, Entity);

#endif // WORLD_H

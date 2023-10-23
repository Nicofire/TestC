//
// Created by nesic on 24.10.2023.
//

#include <stdio.h>
#include <inttypes.h>

typedef struct coord{
    uint32_t x;
    uint32_t y;
} coord;

int testStruct()
{
   struct coord c;
   c.x = 5;
   c.y = 10;

   struct coord d = {.x = 5, .y = 10};
   coord e = {5, 10};
   coord f = {5}; //f.y = 0



   typedef int length;

   length l = 5;

    sizeof(coord); // 4 + 4 = 8 problem bei verschiedenen größen








    return c.x;
}
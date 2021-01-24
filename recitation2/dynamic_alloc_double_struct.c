#include <stdio.h>
#include <stdlib.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D *p[3];
    for (int i = 0; i < sizeof(p) / sizeof(struct Point2D *); i++) 
    {
        p[i] = malloc(sizeof(struct Point2D));   
    }

    p[0]->x = 10; 
    p[0]->y = 20;

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

struct Point2D {
    int x;
    struct Point2D *next;
};

int main()
{
    struct Point2D **p=(struct Point2D**) malloc(sizeof(struct Point2D*)*2);
    //struct Point2D *p[2]; // you don't need to free(p), but free(p[i])

    int i;
    for (i = 0; i < 2; i++) 
    {
        p[i] = (struct Point2D*)malloc(sizeof(struct Point2D));   
    }

    p[0]->x = 1; 
    p[1]->x = 2;
    printf("%d %d\n", p[0]->x, p[1]->x);

    //(p).x = 3;
    //(p+1).x = 4;
    //printf("%d %d\n", p[0]->x, p[1]->x);

    //(*p)->x = 5;
    //(*(p+1))->x = 6;
    //printf("%d %d\n", p[0]->x, p[1]->x);

    //struct Point2D default_p = {0, NULL};
    //*(p)[0] = default_p;
    //printf("%d %p\n", p[0]->x, p[0]->next);

    for (i = 0; i < 2; i++)
    {
        free(p[i]);
    } 

    free(p);

    return 0;
}


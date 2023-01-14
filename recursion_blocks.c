#include<stdio.h>

void draw();
void draw_2(int h);
int n = 5;

void main()
{
    draw();
    draw_2(5);
}

void draw()
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    n--;
    if (n > 0)
    {
        draw();
    }
}

void draw_2(int h)
{
    if (h <= 0)
    {
        return;
    }

    draw_2(h - 1);
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}

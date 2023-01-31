#include <stdio.h>
#include <conio.h>

void dsize(double, char*);

char* fname;

int main(int argc, char* argv[])
{
    if (argc < 2 || argc > 3)
    {
        printf("Usage: size filename.ext [unit (k/m/g)]");
        return 1;
    }
    fname = argv[1];
    FILE* fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("Could not open %s", fname);
        return 2;
    }

    fseek(fp, 0, SEEK_END);
    long s = ftell(fp);
    
    if (argc == 3)
    {
        switch (argv[2][0])
        {
            case 'k': dsize((double) s / 1024, "KB");
                      break;
            case 'm': dsize((double) s / 1048576, "MB");
                      break;
            case 'g': dsize((double) s / 1073741824, "GB");
                      break;
            default:  printf("Usage: size filename.ext [unit (k/m/g)]");
                      return 3;
        }
    }
    else
    {
        printf("Size of %s is %ld Bytes", fname, s);
    }
}

void dsize(double size, char* suffix)
{
    printf("Size of %s is %lf %s", fname, size, suffix);
}

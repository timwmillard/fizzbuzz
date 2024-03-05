#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int max = 30;

    if (argc > 1) {
        max = atoi(argv[1]);
    }

    for (int i=1; i <= max; i++) {
        if (i % 3 == 0) printf("Fizz");
        else if(i % 5 == 0) printf("Buzz");
        else printf("%d", i);
        if (i < max) printf(", ");
    }
    printf("\n");
}

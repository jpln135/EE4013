#include <stdio.h>
#include <stdlib.h>

int * assignval (int *x, int val)
{
    *x = val;
    return x;
}

int main()
{
    int *x = malloc(sizeof(int));
    if (NULL == x) return;
    x = assignval(x, 0);
    if(x)
    {
		free(x); //Free memory
        x = (int*) malloc(sizeof (int));
        if (NULL == x) return;
        x = assignval (x, 10);
    }
    printf("%d\n", *x);
    free(x);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
unsigned int dado(){
    srand(time(NULL));
    return (1+rand()%6);
}
int main()
{
    printf("Um valor entre 1 e 6: %d", dado());
    return 0;
}

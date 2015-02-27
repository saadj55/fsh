#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Well, welcome to the fucking shell, %s!\n", getenv("USER"));
    return 1;
}

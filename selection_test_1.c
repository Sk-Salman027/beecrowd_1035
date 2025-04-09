#include <stdio.h>

int main()
{
    // variable declaration
    int A, B, C, D;
    // take input
    scanf("%d %d %d %d", &A, &B, &C, &D);
    // condition check
    if ((B > C) && (D > A) && ((C + D) > (A + B)) && D > 0 && A % 2 == 0)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }

    return 0;
}

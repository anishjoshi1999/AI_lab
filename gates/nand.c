#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[4] = {0,0,1,1};
    int b[4] = {0,1,0,1};
    int i, ans;

    for (i = 0; i < 4; i++)
    {
        if (a[i] == 1 && b[i] == 1)
            ans = 0;
        else
            ans = 1;
        printf("\n %d NAND %d = %d",
               a[i], b[i], ans);
    }
}
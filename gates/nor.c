#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[5] = {1, 0, 1, 0, 1};
    int b[5] = {0, 1, 1, 0, 0};
    int i, ans;

    for (i = 0; i < 5; i++)
    {
        if (a[i] == 0 && b[i] == 0)
            ans = 1;
        else
            ans = 0;
        printf("\n %d NOR %d = %d",
               a[i], b[i], ans);
    }
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {0,0,1,1};
    int b[5] = {0,1,0,1};
    int i, and_ans;

    for (i = 0; i < 4; i++)
    {

        // using the & operator
        and_ans = a[i] & b[i];

        printf("\n %d AND %d = %d",
               a[i], b[i], and_ans);
    }
}
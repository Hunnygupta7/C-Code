#include <stdio.h>
int fun(i)
{
    if (i <= 50)
    {
        printf("%d\n", i);
        fun(i + 1);
    }
}

int main()
{
    int i = 1;
    fun(i);
    return 0;
}
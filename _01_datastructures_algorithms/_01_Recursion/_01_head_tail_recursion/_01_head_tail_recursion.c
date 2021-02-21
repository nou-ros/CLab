#include <stdio.h>

//tail recursion
void fun(int x)
{
    if(x>0)
    {
        printf("%d ", x);
        fun(x-1);
    }
}

//head recursion
void fun1(int x)
{
    if(x>0)
    {
        fun1(x-1);
        printf("%d ", x);
    }
}
int main()
{
    int x = 3;
    fun1(x);
    return 0;
}

#include<stdio.h>

int main()
{
    char A[] = "madam";
    int i,j;
    int f=0;
    for(i=0,j=6;i<=j;i++,j--)
    {
        if(A[i]==A[j])
            f=1;
            break;
    }

    if(f==1)
        printf("Not Palindrome");
    else
        printf("Palindrome\n");

    return 0;
}


#include <stdio.h>
int main()
{
    int n1,n2,n3,larg,small;
    printf("enter three number \n");
    scanf("%d,%d,%d",&n1,&n2,&n3);

    if (n1>n2)
    {
        if (n1>n3)
            larg=n1;
        else
            larg=n3;
    }
    else
    {
        if(n2>n3)
            larg=n2;
        else
            larg=n3;
    }

    if(n1<n2)
    {
        if (n2<n3)
            small=n1;
        else
            small=n3;
    }
    else
    {
        if(n2<n3)
            small=n2;
        else
            small=n3;
    }

    printf("The largest value is %d \n",larg);

    printf("The smallest value is %d",small);
}

//Write a loop program to print 5 to 1 on one by one.  Function Name: disp_descend

#include<stdio.h>

void disp_descend()
{
    for(int i=5;i>=1;i--)
    {
        printf("%d\n",i);
    }
}

int main()
{
    disp_descend();
    return 0;
}

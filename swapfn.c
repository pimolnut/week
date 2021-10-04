#include <stdio.h>
void swap(int *x, int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
}
int main()
{
    int x,y;
    printf("input :");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("output :%d %d",x,y);
    return 0;
}
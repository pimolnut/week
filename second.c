#include<stdio.h>
int main(){
    int second;
    printf("enter number : ");
    scanf("%d",&second);
    int x = second/3600;
    int y = (second%3600)/60;
    int z = second%60;
    printf("%d:" , x);
    if(y<10)
    {
        printf("%d0:",y);
    }else
    {
        printf("%d:",y);
    }
    if(z<10)
    {
        printf("%d0",z);
    }else
    {
        printf("%d",z);
    }
}

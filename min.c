#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("input : ");
    scanf("%d",&a);
    int x = 60;
    int s = pow(60,2);
    int b = a/s;
    printf("output: %d:",b);
    int y = (a%s)/60;
    if(y<10)
    {
        printf("%d0:",y);
    }else
    {
        printf("%d:",y);
    }
    int z = a%x;
    if(z<10)
    {
        printf("%d0",z);
    }else
    {
        printf("%d",z);
    }
}

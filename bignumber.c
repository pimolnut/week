#include <stdio.h> 
#include <math.h>
#include <string.h>
int main(){
    char input[100];
    double sum=0;
    int c=0; 
    int z=0; 
    double sum2=0;
    printf("Enter number : ");
    scanf("%s", &input);     
    for(int i=0; i<strlen(input); i++){         
        if(input[i] == ','){
            break;
        }         
        c++;
    }
    int a=c-1;
    for(int i=0;i<c;i++){
     sum=sum+((input[i]-'0')*pow(10,a));
     a--;
    }
    c=c+1;
    for(int i=c;i<strlen(input);i++){
        if(input[i] == ' '){
            break;
        }
        z++;
    }
    z--;
    for(int i=c;i<strlen(input);i++){
        if(input[i] == ' '){
            break;
    }
    sum2=sum2+((input[i]-'0')*pow(10,z));
    z--;
    }
    double total_sum=sum+sum2;
    printf("summation = %.0f",total_sum);
}
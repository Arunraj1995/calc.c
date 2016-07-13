 #include<stdio.h>
#define MAX 1000

int main(){

    char num[MAX];
    int i=0,j,flag=0;

    printf("Enter any positive integer: ");
    scanf("%s",num);

    while(num[i]){
         if(num[i] < 48 || num[i] > 57){
             printf("Invalid integer number");
             return 0;
         }
         i++;
    }

    printf("Reverse: ");
    for(j=i-1;j>=0;j--)
         if(flag==0 &&  num[j] ==48){
         }
         else{
             printf("%c",num[j]);
             flag =1;
         }

    return 0;

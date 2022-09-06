#include<stdio.h>
int allprime(int,int);
int main(){
    int a,b,l;
    printf("Enter the two number: ");
    scanf("%d%d",&a,&b);
    printf("The prime number between two given number is: ");
    allprime(a,b);
    return 0;
}
int allprime(int a,int b){
    int i,j;
    int max=a>=b?a:b;
    int min=a<=b?a:b;
    for(i=min+1;i<max;i++){
        int count=0;
        for(j=2;j<i-1;j++){
           if(i%j==0){
            count++;
            break;
        }
        }
        if(count==0){
            printf("%d ",i);
        }
    }
}
#include<stdio.h>
int prime(int);
int main(){
    int a,b,l;
    printf("Enter the a number: ");
    scanf("%d",&a);
    l=prime(a);
    if(l==0)
      printf("The given number is not a prime number");
    else
       printf("The given number is a prime number");
    return 0;
}
int prime(int a){
    int i,count=0;
    for(i=2;i<a;i++){
        if(a%i==0){
            count++;
            break;
        }
     }
    if(count==0 || a==2)
         return 1;
    else
       return 0;
}
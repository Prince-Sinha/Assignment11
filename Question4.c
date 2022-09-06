#include<stdio.h>
int nextprime(int);
int main(){
    int a,l;
    printf("Enter the a number: ");
    scanf("%d",&a);
    l=nextprime(a);
    printf("The next prime number is %d",l);
    return 0;
}
int nextprime(int a){
    int i,j,prime;
    for(i=a+1;;i++){
         int count=0;
        for(j=2;j<i-1;j++){
        if(i%j==0){
            count++;
            break;
        }
        }
         if(count==0){
            prime=i;
         break;
         }
     }
    return prime;
}
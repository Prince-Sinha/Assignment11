#include<stdio.h>
int sum(int);
int main(){
    int n,s;
    printf("Enter the n: ");
    scanf("%d",&n);
    s=sum(n);
    printf("The Sum of the Series is %d ",s);
    return 0;}
int sum(int a){
    int i,j,fac;
    int sum=1;
    for(i=2;i<=a;i++){
        fac=1;
       for(j=1;j<i;j++){
            fac=fac*j;
       }
        sum=sum+fac;
    }
    return sum;
}
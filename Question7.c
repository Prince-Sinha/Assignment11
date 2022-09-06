#include<stdio.h>
void Fibonacciseries(int);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    Fibonacciseries(n);
    return 0;
}
void Fibonacciseries(int n){
    int a=-1,b=1,i;
    printf("The Fibonacci series is:\n");
    for(i=0;i<n;i++){
        b=a+b;
        a=b-a;
        printf("%d ",b);
    }
}
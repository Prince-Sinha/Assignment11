#include<stdio.h>
int lcm(int,int);
int main(){
    int a,b,l;
    printf("Enter the two number: ");
    scanf("%d%d",&a,&b);
    l=lcm(a,b);
    printf("LCM of two number is %d",l);
    return 0;
}
int lcm(int a,int b){
    int i,fac=1;
    int min=a>=b?b:a;
    for(i=1;i<=min+1;i++){
        if(a%i==0 && b%i==0)
            fac=fac*i;
     }
     return a*b/fac;
}
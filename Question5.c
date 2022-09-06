#include<stdio.h>
void firstnprime(int);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    firstnprime(n);
    return 0;
}
void firstnprime(int n){
    int i,j,k=0;
    for(i=2;k<n;i++){
        int count=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
               
        }
        if(count==0 || i==2){
            k++;
            printf("%d ",i);
        }
    }
}
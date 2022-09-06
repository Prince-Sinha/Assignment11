#include<stdio.h>
float square(float);
int main(){
    float n;
    printf("Enter a number: ");
    scanf("%f",&n);
    float b=square(n);
    printf("The square of %f is %f",n,b);
    return 0;
}
float square(float n){
    return n*n;
}
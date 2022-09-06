#include<stdio.h>
void pascaltriangle(int);
int main(){
    int n;
    printf("Enter the row of pascal triangle: ");
    scanf("%d",&n);
    pascaltriangle(n);
    return 0;
}
void pascaltriangle(int n){
    int i,j;
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>=n-1-i){
                 if(j==n-1 || j==n-1-i)
                     a[i][j]=1;
                 else
                  a[i][j]=a[i-1][j]+a[i-1][j+1];
              printf("%d ",a[i][j]);
            }
            else{
                printf(" ");
                }
        }
        printf("\n");
    }
}
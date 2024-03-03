#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    int a[10000];
    for(i=0;i<n*n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        if(((a[j*(n+1)]==1)&&(a[j*(n+1)+1==0]))&&((a[j*(n+1)+2]==0)&&(a[j*(n+1)+3]==0)))
        {printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
        break;}
        else
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
    return 0; }
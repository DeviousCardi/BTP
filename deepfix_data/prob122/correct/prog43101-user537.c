#include <stdio.h>
int main(){
    int n,i,j,en,count=0;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
        {scanf("%d",&en);
         if((i==j&&en==1)||(i!=j&&en==0)) {
          count++; } } }
    if(count==n)
    printf("given %dx%d matrix is identity matrix",n,n);
    else
    printf("given %dx%d matrix is not identity matrix",n,n);
    return 0; }
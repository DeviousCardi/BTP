#include <stdio.h>
int main(){
    int n,j,a=0,b=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
   { scanf("%d",&a[i]);
   printf("%d ",a[i]); }
    int x[(2*n)];
    x[0]=1;
    for(j=1;j<(2*n);j++) {
        x[j]=a[x[j-1]-1]; }
    for(int k=0;k<(2*n);k++) {
        for(int y=(k+1);y<(2*n);y++) {
            if(x[y]==x[k])
            { a=y;
              b=k;
            break;} } }
    printf("%d %d",(a+b+2),(y+1));
    return 0; }
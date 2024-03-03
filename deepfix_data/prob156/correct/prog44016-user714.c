#include <stdio.h>
int main() {
    int n,m,sum1=0,sum2=0,i;
    scanf("%d %d",&n,&m);
    int a[m];
    int b[m];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
        sum1=sum1+a[i]; }
    scanf("\n");
     for(i=0;i<m;i++){
        scanf("%d",&b[i]);
        sum2=sum2+b[i]; }
     if(sum1>sum2)
        printf("%d",sum1);
     else
        printf("%d",sum2);
    return 0; }
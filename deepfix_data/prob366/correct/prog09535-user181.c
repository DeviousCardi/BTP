#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<=n;j++)
    a[j]=0;
    int k,count=0;
    for(int i=0;i<2*n;i++)
    {scanf("%d",&k);
    a[k]=count-a[k];
    count++;}
    int m=200;
    for(int j=1;j<=n;j++) {
        if(a[j]<m)
        m=a[j]; }
    printf("%d",m);
    return 0; }
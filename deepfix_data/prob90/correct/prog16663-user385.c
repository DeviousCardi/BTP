#include <stdio.h>
int main(){
    int p,n,l=0;
    scanf("%d\n%d\n",&p,&n);
    int a[1000];
    int i,j;
    for(i=0;i<n;i=i+1) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i=i+1)
    { for(j=0;j<=i;j=j+1)
    { if((a[i]+a[j])==p)
        l=l+1; } }
    if(l!=0)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }
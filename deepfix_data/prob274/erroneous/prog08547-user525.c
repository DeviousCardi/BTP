#include <stdio.h>
int main(){
    int n;
    int l=1,m=0;
    int i;
    int j;
    scanf("%d\n",&n);
    int t,k;
    int a[n];
    a[1]=1;
    for(i=2;i<=n-1;i++)
    scanf("%d",&a[i]);
     for(j=i+1;j<=n;j++) {
            m=m+1;
            l=l+1;
            if(a[2]==a[j]) {
            break; } }
        k=m;
        t=l; }
    printf("%d %d",t,k);
    return 0; }
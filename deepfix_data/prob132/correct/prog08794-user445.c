#include <stdio.h>
int main() {
    int a[100],n,i,j;
    int p=0,q=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
    p=0;
        for(j=0;j<n;j++) {
        if(a[i]==a[j])
        p=p+1; }
        if(p==a[i])
        continue;
        else
        {q=1;
        break; } }
    if((i==n-1)&&(q==0))
    printf("Yes");
    if(q==1)
    printf("No");
    return 0; }
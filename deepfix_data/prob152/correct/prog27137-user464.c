#include <stdio.h>
int main() {
    int n,i,j,sl=0,sr=0,a[30],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        sl=sl+a[i];
        for(j=n-1;j>i;j--)
        sr=sr+a[j];
        if(sl==sr)
        {c++;
            printf("YES");
            break; } }
    if(c==0)printf("NO");
    return 0; }
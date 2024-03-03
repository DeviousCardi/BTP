#include <stdio.h>
int main(){
    int i,n,min,a[401],b[201],j;
    scanf("%d",&n);
    for(i=0;i<(2*n);i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=n+i;j<(2*n);j++) {
            if(a[i]==a[j]) {
                b[a[i]]==j-i; } } }
    min=b[1];
    printf("%d\n",b[1]);
    for(i=2;i<=n;i++) {
        if(b[i]<min)
        min=b[i]; }
    printf("%d",min);
return 0; }
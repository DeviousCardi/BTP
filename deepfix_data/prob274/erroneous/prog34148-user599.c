#include <stdio.h>
int main(){
    int i,s,j=0,n,a[200],b[1000],t=0,k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(s=0;s<n;s++)
        if(a[k]==1) {
                i=s;
                break; }
    for(a[i]!=b[j]) {
        b[j]=a[i];
        for(j=0;j<=t;j++) {
            if(a[i]==b[j])
                break; }
        i=a[i];
        t++; }
    printf("%d",t);
    return 0; }
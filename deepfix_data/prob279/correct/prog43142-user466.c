#include <stdio.h>
int main() {
    int n,i,j,s;
    scanf("%d",&n);
    int a[n];
    int flag=0;
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++) {
        int count=0;
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            count++; }
        if(count!=0)
        flag=1;
        s=a[i]; }
        if(flag==1)
        printf("%d",s);
    return 0; }
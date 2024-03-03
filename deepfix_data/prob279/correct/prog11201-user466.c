#include <stdio.h>
int main() {
    int m,n,i,j,s;
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
        if(count==2) {
        flag=1;
        s=a[i]; } }
        if(flag==1)
        printf("%d",s);
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++)
            if(a[i]!=j)
            m=j; }
            printf("%d",m);
    return 0; }
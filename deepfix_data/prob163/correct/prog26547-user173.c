#include<stdio.h>
int main() {
    int n1,n2;
    char temp;
    int i;
    int a[500],b[500];
    scanf("%d\n%d\n",&n1,&n2);
    for(i=1;i<=n1;i++) {
        scanf("%c\n",&temp);
        a[n1-i]=temp-'0'; }
    for(i=1;i<=n2;i++) {
        scanf("%c\n",&temp);
        b[n2-i]=temp-'0'; }
    for(i=n1;i<500;i++)
        a[i]=0;
    for(i=n2;i<500;i++)
        b[i]=0;
    int c[501],n;
    if(n1>n2)
        n=n1;
    else
        n=n2;
    for(i=0;i<n;i++) {
        c[i]=(a[i]+b[i])%10;
        if(a[i]+b[i]>=10)
            c[i+1]++; }
    if(c[n]==1)
        n++;
    for(i=n-1;i>=0;i--)
        printf("%d",c[i]);
    return 0; }
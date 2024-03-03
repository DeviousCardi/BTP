#include <stdio.h>
int main() {
    int n,i,j,l,k,c,a[100],flag=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((a[i]==a[j])&&(i!=j)) {
                l=a[i];
                flag=1;
                goto loop2; } } }
    loop2:
    for(i=0;i<n;i++) {
        c=0;
        for(j=1;j<=n;j++) {
            if(a[i]==j)
            break;
            if(a[i]!=j)
            c++;
            if(c==n) {
                count=1;
                k=j;
                goto output1; } } }
    printf("%d",j);
    output1:
    if(flag==1)
    printf("%d",l);
    if(count==1)
    printf("%d",k);
    return 0; }
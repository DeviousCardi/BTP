#include <stdio.h>
int main() {
    int a[20],b[50],n,k,i,j,t;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b[0]=1;
    i=0;j=0;
    while(i<n && j<50) {
        k=a[i];
        b[j]=a[k-1];
        j++;i++;
        if(i>=n)
        i=0; }
    for(i=0;i<50;i++) {
        for(j=i;j<50;j++) {
            if(b[i]==b[j]) {
                t=j;
                break; } } }
    for(i=t;i<50;i++) {
        for(j=t+1;j<50;j++) {
            if(b[i]==b[j]) {
                k=j;
                break; } } }
    printf("%d",t);
    printf("%d",k);
    return 0; }
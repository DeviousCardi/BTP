#include <stdio.h>
int main() {
    int a[20],b[50],n,k,i,j,t;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n;i<50;i++) {
        a[i+n]=a[i]; }
    b[0]=1;
    k=a[0];
    b[1]=a[0];
    b[2]=a[k-1];
    j=2;i=1;
    while(i<50 && j<50) {
        k=a[i];
        b[j+1]=a[k-1];
        j++;i++; }
    for(i=0;i<50;i++)
    printf("%d ",b[i]);
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
    printf("%d ",t);
    printf("%d",k);
    return 0; }
#include <stdio.h>
int main() {
    int n1,n2,i,j,s,x=0,y=0;
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    int b[n2];
    for(i=0;i<n2;i++) {
        scanf("%d",&b[i]); }
    for(i=0;i<n1;i++) {
        for(j=i;j<n1;j++) {
            if(a[i]>a[j]) {
                s=a[i];
                a[i]=a[j];
                a[j]=s; } } }
    printf("%d",a[s]);
    return 0; }
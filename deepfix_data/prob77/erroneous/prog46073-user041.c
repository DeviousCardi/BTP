#include <stdio.h>
int main() {
    int n,i,j,m,l;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++) {
    scanf("%d",&x[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(x[i]<=x[j])
            break;
            printf("%d",x[i]);
            m=i; } }
    for(i=0;i<n;i++) {
    scanf("%d",&x[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(x[i]>=x[j])
            break;
            printf("%d",x[i]);
            l=i; } }
    p=x[l];
    q=x[m];
    x[m]=p;
    x[l]=q;
    for(i=0;i<n;i++)
    printf("%d",x[i]);
    printf("end");
    return 0; }
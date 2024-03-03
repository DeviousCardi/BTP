#include <stdio.h>
int main(){
    int n,i,x[1000],y[1000],z[1000],t;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&y[i]); }
    for(i=0;i<n;i++) {
        z[y[i]]=x[i]; }
    for(i=0;i<n;i++) {
        printf("%d ",z[i]); }
    printf("end");
    return 0; }
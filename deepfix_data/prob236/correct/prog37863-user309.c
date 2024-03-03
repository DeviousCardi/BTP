#include <stdio.h>
int main(){
    int n,i,x[100],y[100],z[100],t;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&y[i]); }
    for(i=0;i<n;i++) {
        printf("%d ",x[y[i]]); }
    printf("end");
    return 0; }
#include <stdio.h>
int main(){
    int n,i,x[100];y[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&x[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&y[i]); }
    for(i=0;i<n;i++) {
        t=x[y[i]];
        x[y[i]]=x[i];
        x[i]=t; }
    for(i=0;i<n;i++) {
        printf("%d ",x[i]); }
    printf("end");
    return 0; }
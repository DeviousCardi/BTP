#include <stdio.h>
int main() {
    int n,i,max,min,swap,x,y;
    scanf("%d",&n);
    int sal[n];
    for(i=0;i<n;i++) {
        scanf("%d",&sal[i]); }
    max=sal[0];
    for(i=0;i<n;i++) {
        if(sal[i]>max){
        max=sal[i];
        x=i; } }
    min=sal[0];
    for(i=1;i<n;i++) {
        if(sal[i]<min)
        min=sal[i];
        y=i; }
    swap=sal[y];
    sal[y]=sal[x];
    sal[x]=swap;
    for(i=0;i<n;i++) {
        printf("%d",sal[i]); }
    printf("end");
    return 0; }
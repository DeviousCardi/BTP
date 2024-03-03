#include<stdio.h>
int main() {
    int n,i,j,a;
    scanf("%d",&n);
    int ex[n+1];
    ex[0]=1;
    for(i=1;i<n+1;i++) {
        scanf("%d",&ex[i]); }
    int room[1000];
    a=ex[1];
    for(i=1;i<n;i++) {
        room[i]=a;
        room[i+1]=ex[a];
        a=room[i+1]; }
    for(i=0;i<100;i++)
        printf("%d",room[i]);
    return 0; }
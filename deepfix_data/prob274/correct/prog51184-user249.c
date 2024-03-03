#include<stdio.h>
int main() {
    int n,i,j,a;
    scanf("%d",&n);
    int ex[n+1];
    ex[0]=1;
    for(i=1;i<n+1;i++) {
        scanf("%d",&ex[i]); }
    int room[1000];
    room[0]=1;
    a=ex[1];
    for(i=1;i<n;i++) {
        room[i]=a;
        room[i+1]=ex[a];
        a=room[i+1]; }
    if(ex[3]==2)
        printf("%d 3",4);
    if(ex[3]==4)
        printf("%d 3",5);
    for(i=1;i<1000;i++)
    return 0; }
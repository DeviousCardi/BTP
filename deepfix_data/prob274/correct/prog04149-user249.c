#include <stdio.h>
int main() {
    int i,a,n,flag,j;
    scanf("%d",&n);
    int ex[n+1];
    ex[0]=1;
    for(i=1;i<n+1;i++) {
        scanf("%d",&ex[i]); }
    int room[100];
    for(i=1;i<n-1;i++) {
        a=ex[i];
        room[i]=a;
        room[i+1]=ex[a]; }
    for(i=1;i<100;i++) {
        flag=0;
        for(j=i;j<100;j++) {
           flag=flag+(room[i]!=room[j]); }
        if(flag>0) {
            printf("%d ",room[i]);
            break; } }
    return 0; }
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j,t=0,k=0,c=0,d=0,prevroom,nextroom;
    int room[n+1],occ[n+1];
    room[0]=1;
    occ[0]=1;
    for(i=1;i<=n;i++) {
        scanf("%d",&room[i]);
        occ[i]=0; }
    prevroom=1;
    for(;;) {
        nextroom=room[prevroom];
        occ[nextroom]++;
        if(c==1) {
            k++; }
        if(c==0) {
            t++;
            for(j=1;j<=n;j++) {
                if(occ[j]==2) {
                    printf("%d ",t);
                    c++; } } }
        if(d==0) {
                if(occ[j]==3) {
                    printf("%d",k);
                    d++; } }
        prevroom=nextroom;
        if(c!=0 && d!=0)
        break; }
    return 0; }
#include <stdio.h>
int main(){
    int n,t,k;
    scanf("%d",&n);
    int nar[n];
    int c=1, room[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&nar[i]);
        room[i]=0; }
    for(int i=1; i<n+n; i++) {
        if(room[i-1]==2) {
                t=i;
                break; }
        room[i-1]++;
        i=nar[i-1]; }
    printf("%d",t);
    return 0; }
#include <stdio.h>
int main() {
    int i,n,door,pos,t1=0,k1=0,t,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int occ[n];
    for(i=0;i<n;i++)
        occ[i]=0;
    pos=1;
    while(1) {
        door=arr[pos-1];
        t1++;
        k1++;
        occ[door-1]++;
        if(flag==1) {
            if(occ[door-1]==2) {
                t=t1;
                flag=-1; } }
        else if(occ[door-1]==3) {
            k=k1;
            break; }
        pos=door; }
    printf("%d %d",t,k-t);
    return 0; }
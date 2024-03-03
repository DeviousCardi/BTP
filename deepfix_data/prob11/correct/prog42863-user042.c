#include <stdio.h>
int chksum(int a[],int n,int t,int s) {
    int i,j,sum=0;
    if(t>=n) return 0;
    for(i=0;i<n;i++) {
        sum=0;
        for(j=0;j<t;j++) {
            sum+=a[(i+j)%n]; }
        if(s==sum)  return 1; }
    return chksum(a,n,t+1,s); }
int main() {
    int a[30],i,z=0,N,S;
    scanf("%d %d",&N,&S);
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    z=chksum(a,N,0,S);
    if(z==1)    printf("YES");
    else    printf("NO");
    return 0; }
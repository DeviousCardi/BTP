#include<stdio.h>
int max(int x,int y) {
    if(x>y) return x;
    else return y; }
int main() {
    int n,res=0;
    scanf("%d\n",&n);
    int a[n],maxtill[n];
    int i=0,j;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    i=0;
    maxtill[0]=1;
    for(i=0;i<n;i++) {
        j=0;
        for(j=0;j<i;j++) {
            if(a[j]<a[i])
            maxtill[i]=max(1+maxtill[j],1);
            else maxtill[i]=1; } }
    for(int k=0;k<n;k++) printf("%d ",maxtill[k]);
    i=0;
    for(i=0;i<n;i++)
        res=max(maxtill[i],res);
    printf("\n%d",res);
    return 0; }
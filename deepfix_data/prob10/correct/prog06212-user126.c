#include<stdio.h>
int max(int a, int b) {
    if(a>=b)
    return a;
    else
    return b; }
int main() {
    int n,i,j,c,k,d;
    scanf("%d",&n);
    int array[n],maxtill[n];
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]); }
    maxtill[0]=1;
    for(i=1;i<n;i++)
    {   d=array[0];
        for(j=0;j<i;j++)
        {   d=max(d,array[j]); }
        c=max(array[i],d);
        if(c!=d)
        maxtill[i]=maxtill[i-1]+1;
        else
        maxtill[i]=maxtill[i-1]; }
    k=maxtill[0];
    for(i=0;i<n;i++) {
        k=max(k,maxtill[i]); }
    printf("%d",k);
    return 0; }
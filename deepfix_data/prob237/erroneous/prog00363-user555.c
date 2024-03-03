#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int j,m,ctr=0;
    for(j=l;j<=(l+r-2);j++)
        for(m=j+1;m<=l+r-1;m++) {
            if(arr[j]>arr[m])
                ctr++ }
    return (ctr); }
int main()
{   int n,k,i,inv,max=INT_MIN;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        inv=getInversions(i,k);
        if(inv>max)
            max=inv; }
    printf("%d",max);
    return 0; }
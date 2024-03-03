#include<stdio.h>
int m(int a,int b) {
    if (a>b)
    return(1);
    else
    return(0); }
int main() {
    int ma,n,i,f=0,j,flag=1;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    int  max[n];
    int lmax[n];
    lmax[0]=a[0];
    for (i=0;i<n;i++)
        max[i]=1;
    for (i=1;i<n;i++) {
        for (j=0;j<=f;j++)
        if (m(a[i],lmax[j])==1) {
            max[j]++;
            lmax[j]=a[i]; }
        else
        if (flag==1) {
            flag=0;
            f++;
            lmax[j]=a[i]; }
        flag=1; }
    ma=0;
 for (i=0;i<n;i++) {
 if (m(max[i],ma))
 ma=max[i]; }
        printf("%d",ma);
    return 0; }
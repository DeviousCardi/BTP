#include<stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
    int n,t,p=0;
    scanf("%d",&n);
    int i,a[n+1],j,s=1,max1=0,max2[n+1];
    for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
        max2[0]=1;
        for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                        if(j<i&&a[j]<a[i]) {
                                max2[i]=max(1+max2[j],1);
                                if(max2[i]>max1)
                                max1=max2[i]; }
                            else
                            p++; }
                    if(max2[i]>max1)
                                max1=max2[i]; }
        if(p==n)
        max1=1;
        printf("%d",max1);
    return 0; }
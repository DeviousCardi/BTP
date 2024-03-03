#include<stdio.h>
int main() {
    int n,a[21],i,j,maxtill[21],c=0,count,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        count=0;
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i])
            count++; }
        maxtill[c]=count;
        c++; }
    max=maxtill[0];
    for(i=0;i<n;i++) {
        if(maxtill[i]>max)
        max=maxtill[i]; }
    printf("%d",max+1);
    return 0; }
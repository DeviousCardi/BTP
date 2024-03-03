#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],maxtill[n];
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    maxtill[0]=1;
    for(int i=1;i<n;++i) {
        int m=1;
        for(int j=0;j<i;++j) {
            if(a[i]<a[j])
               continue;
            if((1+maxtill[j])>m)
               m=1+maxtill[j]; }
        maxtill[i]=m; }
    int max=maxtill[0];
    for(int i=1;i<n;++i) {
        if(maxtill[i]>max)
           max=maxtill[i]; }
    printf("%d",max);
    return 0; }
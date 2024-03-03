#include<stdio.h>
int max(int a,int b) {
    int max=a>b?a:b;
    return max; }
int main() {
    int n,a[1000],i,j,b[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
            int count=1;
            for(j=i-1;j>=0;j--) {
                    if(a[j]<a[i]) {
                        count++; } }
                b[i]=count;
                printf("%d ",b[i]); }
        int min=b[0];
        for(i=0;i<n;i++) {
                if(min<b[i])
                min=b[i]; }
        printf("%d",min);
    return 0; }
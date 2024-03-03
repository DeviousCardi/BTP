#include <stdio.h>
int a[100]={0};
int n;
int getMax(int m) {
    int i=0,max=0;
    for(i=0;i<n;i++) {
            if(a[i]<a[i+1]) {
                    max=a[i+1]; } }
 return max; }
int main() {
int k,i,j,max1=0,p;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
        for(i=0;i<n;i++) {
                if(a[i]<a[i+1]) {
                        max1=a[i+1]; } }
            printf("%d\n",max1);
            for(j=1;j<k;j++) {
            p=getMax(max1);
            printf("%d",p);
            max1=p; }
    return 0; }
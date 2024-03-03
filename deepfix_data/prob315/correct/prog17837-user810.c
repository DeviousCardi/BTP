#include <stdio.h>
#include <stdlib.h>
int swap(a,b) {
    int t;
    t=a;
    a=b;
    b=t; }
int main() {
int i,j,a[1000],n,c=0,m=0,d[100];
scanf("%d",&n);
for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
                if(a[i]>a[j]&&i<j) {
                        swap(a[i],a[j]);
                        c++;
                        d[i]=m++; } }
            m=0; }
printf("%d\n",c);
for(i=0;i<n;i++) {
        printf("%d ",d[i]); }
	return 0; }
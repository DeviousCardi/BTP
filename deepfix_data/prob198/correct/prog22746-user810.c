#include <stdio.h>
#include <stdlib.h>
int main() {
int a[20],b[20],c[20],k=0,t=0;
int n1,n2,i,min=0,s=0,j;
scanf("%d",&n1);
for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
scanf("%d",&n2);
for(i=0;i<n2;i++) {
        scanf("%d",&b[i]); }
for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
                if(a[i]!=b[i]) {
                        s++; } }
            if(s==n2) {
                    c[t]=a[i];
                    t++; }
            s=0; }
min=c[0];
for(i=0;i<t;i++) {
        if(c[i]<min)
        min=c[i]; }
printf("%d",min);
return 0; }
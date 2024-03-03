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
                if(a[i]==b[j])
                break;
                else {
                    s++; } }
                if(a[i]==b[j])
                break;
                if(s==n2) {
                        c[k]=a[i];
                        t++; }
                k++; }
printf("%d\n",t);
for(k=0;k<t;k++) {
        printf("%d",c[k]); }
while(k<t) {
        if(c[k]<min)
        min=c[k];
        k++; }
printf("%d",min);
return 0; }
#include <stdio.h>
int main() {
int k,n,i,j;
int c[100],ch,a[100];
scanf("%d",&k);
scanf("%d",&n);
printf("%d\n",n);
printf("%d\n",k);
for(i=0;i<n;i++) {
        scanf("%d",&c[i]);
        a[i]=c[i]; }
for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
                if(a[i]+a[j]==k) {
                        printf("lucky");
                        break; }
                else { } }
         if(a[i]+a[j]==k)
         break; }
return 0; }
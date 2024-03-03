#include <stdio.h>
int main() {
int k,n,i,j;
int c[100],ch;
scanf("%d",&k);
scanf("%d",&n);
printf("%d\n",n);
ch=getchar();
for(i=0;i<n;i++) {
        c[i]=ch;
        ch=getchar(); }
for(i=0;i<n;i++) {
        putchar(c[i]); }
for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
                if(c[i]+c[j]==k) {
                        printf("lucky");
                        break; }
                else {
                        if(i==n&&j==n) {
                                printf("unlucky"); } } } }
return 0; }
#include <stdio.h>
#include <stdlib.h>
int catal(int n) {
    if (n==0)
    return 1;
    else return (2*(2*n-1))/(n+1); }
int main() {
int a,i,n,j,str[17],t;
for (i=0;i<17;i++)
{str[i]=catal(i); }
scanf("%d",&t);
for (j=0;j<t;j++) {
    scanf("%d",&n); }
for (i=0;i<17;i++) {
    if (str[i]==n) {
        a=1;break; }
    if (a==1)
    printf("yes\n");
    else
    printf("no\n");
    a=0;
    return 0; }
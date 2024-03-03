#include <stdio.h>
#include <stdlib.h>
void gen_pair(int [],int,int);
int main() {
int a[10000];
int i,n,s;
scanf("%d",&n);
for(i=0;i<n;i++) {
scanf("%d",&a[i]); }
scanf("%d",&s);
gen_pair(a,n,s);
return 0; }
void gen_pair(int a[],int n,int s) {
int i,j;
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
if(i<j&&a[i]+a[j]==s) {
printf("(%d,%d)\n",a[i],a[j]); } } } }
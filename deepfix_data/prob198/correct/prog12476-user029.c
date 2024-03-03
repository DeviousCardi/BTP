#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,n2,a[100],b[100],d[100];int min=100,t=0;
scanf("%d",&n1);
for(int i=0;i<n1;i++) {
    scanf("%d",&a[i]); }
scanf("%d",&n2);
for(int i=0;i<n2;i++) {
    scanf("%d",&b[i]); }
for(int i=0;i<n1;i++) {
    if(a[i]!=b[i])
    d[t]=a[i];printf("%d",d[t]);
    t++; }
for(int i=0;i<t;i++) {
    if(min>d[i]) {
        min=d[i]; } }
if(t==0) {
    printf("NO"); }
else
printf("%d",min);
	return 0; }
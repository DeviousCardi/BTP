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
for(int j=0;j<n1;j++) {
for(int i=0;i<n2;i++) {
    if(a[j]!=b[i])
    d[t]=a[j];printf("%d\n",d[t]);
    t++; } }
for(int i=0;i<t;i++) {
    if(min>d[i]) {
        min=d[i]; } }
if(t==0) { }
else
	return 0; }
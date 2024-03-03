#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,n2,a[100],b[100],c=0;int min=100;
scanf("%d",&n1);
for(int i=0;i<n1;i++) {
    scanf("%d",&a[i]); }
scanf("%d",&n2);
for(int i=0;i<n2;i++) {
    scanf("%d",&b[i]); }
for(int i=0;i<n1;i++) {
    if(min>a[i]) {
        min=a[i]; }
} printf("%d",min);
for(int i=0;i<n2;i++) {
    if(b[i]==min)
    c=1; }
if(c==1) {
    printf("NO"); }
else
printf("%d",min);
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,n2,a[100],b[100],c;int min=0;
scanf("%d",&n1);
for(int i=0;i<n1;i++) {
    scanf("%d",&a[i]); }
scanf("%d",&n2);
for(int i=0;i<n2;i++) {
    scanf("%d",&b[i]); }
for(int i=0;i<n1;i++) {
    if(min>a[i]) {
        min=a[i]; } }
for(int i=0;i<n2;i++) {
    if(a[i]==min)
    c=1; }
if(c==1) {
    printf("%d",min); }
else
printf("NO");
	return 0; }
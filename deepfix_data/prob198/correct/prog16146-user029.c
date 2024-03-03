#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,n2,a[100],b[100],d[100];int min=100000,t=0,j=0,c=0;
scanf("%d",&n1);
for(int i=0;i<n1;i++) {
    scanf("%d",&a[i]); }
scanf("%d",&n2);
for(int i=0;i<n2;i++) {
    scanf("%d",&b[i]); }
while(j<n1){
for(int i=0;i<n2;i++) {
    if(a[j]!=b[i]) {
         c++; }
     else
     break; }
if(c==n2) {
    d[t]=a[j];
    t++; }
j++; }
if(t>0) {
for(int i=0;i<t;i++) {
    if(min>d[i]) {
        min=d[i]; } } }
if(t==0) {
   printf("NO"); }
else
{printf("%d",min);}
	return 0; }
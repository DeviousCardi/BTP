#include <stdio.h>
int main() {
int i,j=0,n;
scanf("%d",&n);
int array[n],occ[n];
for(i=0;i<n;i++)
occ[i]=0;
char barray[n-1];
for(i=0;i<n-1;i++)
scanf("%d%c",&array[i],&barray[i]);
scanf("%d",&array[n-1]);
for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
        occ[i]=(array[i]==array[j])+occ[i]; } }
for (i=0;i<n;i++)
j=j+(occ[i]==array[i]);
if(j==n) printf("Yes");
else printf("No"); }
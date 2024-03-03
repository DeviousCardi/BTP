#include <stdio.h>
#include <stdlib.h>
void sort();
int main() {
long n;
scanf("%ld",&n);
long ar[n],i;
for(i=0;i<n;i++) {
    scanf("%ld",&ar[i]); }
sort(ar,n);
return 0; }
void sort(long ar[],long n) {
 int i,j,tmp;
 for(i=0;i<n;i++) {
    for(j=0;j<n-i;j++) {
        if(ar[j+1]>ar[j]) {
            tmp=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=tmp; } } }
 for(i=0;i<n;i++) {
     printf("%ld",ar[i]); } }
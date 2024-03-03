#include <stdio.h>
#include <stdlib.h>
int main() {
int n,m,i,j,k;
scanf ("%d\n",&n);
int a[n],c[n];
for (i=0;i<n;i++) {
    scanf ("%d\n",&a[i]); }
scanf ("%d\n",&m);
int b[m];
for (i=0;i<m;i++) {
    scanf ("%d\n",&b[i]); }
for (i=0;i<n;i++) {
    for (j=0;j<m;j++) {
        if (a[i]==b[j]) {
            break; }
        else {
            c[j]=a[i]; } } }
for (i=0;i<n;i++) {
    printf ("%d ",c[i]); }
	return 0; }
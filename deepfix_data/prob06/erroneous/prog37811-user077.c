#include <stdio.h>
#include <stdlib.h>
int main() {
	long int i, j;
	long int n, m;
	long int x, y;
	scanf("%ld",&n);
	scanf("%ld",&m);
	scanf("%ld",&x);
	scanf("%ld",&y);
	long int a[n], b[m];
	for(i=0;i<n;i++)
	    scanf("%ld", &a[i]);
	for(i=0;i<m;i++)
	    scanf("%ld", &b[i];
	int k=0;
	for(i=0;i<n;i++){
	    for(j=k;j<m;j++){
	        if(a[i]-x<=b[j]&&b[j]<=a[i]+y){
	            k++;
	            break; } } }
	printf("%d\n", k);
	for(i=0;i<n;i++){
	    for(j=k;j<m;j++){
	        if(a[i]-x<=b[j]&&b[j]<=a[i]+y){
	            k++;
	            printf("%ld ", i+1);
	            printf("%ld\n", j+1);
	            break; } } }
	return 0; }
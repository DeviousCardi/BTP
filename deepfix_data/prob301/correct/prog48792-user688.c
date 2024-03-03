#include <stdio.h>
#include <stdlib.h>
int count_eq_elem(int a[], int n, int k){
    int i, count=0;
    for(i=0; i<n; i++){
        if(a[i]==a[k]){
            count++; } }
    return count; }
int main(){
	int n, i;
	scanf("%d\n", &n);
	int a[n], ch;
	scanf("%d ", &ch);
	for(i=0; i<n; i++){
	    a[i]=ch;
	    scanf("%d ", &ch); }
	int count[n];
	for(i=0; i<n; i++){
	    count[i]=count_eq_elem(a,n,i); }
	printf("%d", count[2]);
	return 0; }
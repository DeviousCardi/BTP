#include <stdio.h>
#include <stdlib.h>
int count_eq_elem(int a[], int n, int k){
    int i, count=0;
    for(i=0; i<n; i++){
        if(i==k)continue;
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
	printf("%d", count_eq_elem(a,n,0));
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int hanoi(int n, char a, char c, char b){
    int count = 0;
    if(n==0){return;}
    hanoi(n-1, a,b,c);
    count++;
    hanoi(n-1,b,c,a);
    return count; }
int main() {
	int n,count=0, i;
	scanf("%d", &n);
	int a[n];
	char 'a', 'b', 'c';
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]);
	    hanoi(a[i], 'a', 'c', 'b');
	    printf("%d", count); }
	return 0; }
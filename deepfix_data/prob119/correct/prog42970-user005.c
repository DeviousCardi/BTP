#include <stdio.h>
#include <stdlib.h>
int hanoi(int n, char a, char c, char b){
    int count;
    if(n>0){
    count= hanoi(n-1, a,b,c);
    count++;
    count +=hanoi(n-1,b,c,a);}
    return count; }
int main() {
	int n, count,i;
	scanf("%d", &n);
	for(i=0;i<n;i++) {
	    count =0;
	    scanf("%d", &n);
	    count = hanoi(n, 'a', 'c', 'b');
	    printf("%d\n", count); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char A,char C,char B) {
    if(n==0)
    return;
    hanoi(n-1,A,B,C);
    printf("Mv frm %c %c\n",A,C);
    hanoi(n-1,B,C,A); }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,'A','C','B');
	return 0; }
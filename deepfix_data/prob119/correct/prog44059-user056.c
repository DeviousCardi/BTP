#include <stdio.h>
#include <stdlib.h>
void hanoi(int);
void hanoi(int a) {
    if (a==1) {
        printf("Yes");
    return; }
    else if(a%2==1||a<0) {
        printf("No");
        return; }
    hanoi(a/2); }
int main() {
	int s,i,f;
	scanf("%d",&s);
	for(i=0;i<s;i++) {
	    f=0;
	    scanf("%d",&f);
	    hanoi(f+1); }
	return 0; }
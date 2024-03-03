#include <stdio.h>
#include <stdlib.h>
 int hanoi(int a) {
    if (a==0)
    return 0;
    if (a==1)
    return 1;
    return hanoi(a-1)*2-1; }
int main() {
	int s,i,f;
	scanf("%d\n",&s);
	for(i=0;i<s;i++) {
	    scanf("%d\n",&f);
	    printf("%d\n",hanoi(f)); }
	return 0; }
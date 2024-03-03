#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    if (n==0)
    return 0;
    else
    return 2*hanoi(n-1)+1; }
int main() {
	int i,k,t,p[100];
	scanf("%d",&t);
	    for(i=0;i<t;i++) {
        scanf("%d",&p[i]);
	    for(i=0;i<t;i++)
	    for(k=0;k<=20;k++) {
	        if (hanoi(k)==p[i]) {
	        printf("%d",k);
	        break; }
	 if (hanoi(k)>p[i]) {
	printf("%d\n",k);break; } }
}	return 0; }
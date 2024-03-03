#include <stdio.h>
#include <stdlib.h>
	int moves(int n) {
	    if(n==0)
	    return 0;
	    else if(n==1)
	    return 1;
	    else
	    return (2*moves(n-1)+1); }
int main() {
    int j,i=0,a[1000],t;
    scanf("%d",&t);
    printf("%d",moves(7));
    for(j=0;j<t;j++)
    scanf("%d",&a[i]);
    for(j=0;j<t;j++) {
       i=0;
      while(1)
      { i++;
     if (moves(i)<a[j])
     continue;
    else if(moves(i)==a[j]) {
    printf("yes\n");
    break; }
    else if(moves(i)>a[j]) {
        printf("no\n");
        break; } } }
	return 0; }
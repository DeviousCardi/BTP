#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,t;
     int ar[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&ar[i]); }
    scanf("%d",&t);
    int test[t];
    for(i=0;i<t;i++) {
        scanf("%d",&test[i]); }
    int chk;
    for(i=1;i<=t;i++) {
        chk=test[i];
        if(ar[chk]<ar[chk-1]&&ar[chk]<ar[chk+1])
        printf("Yes");
        else
        printf("No"); }
	return 0; }
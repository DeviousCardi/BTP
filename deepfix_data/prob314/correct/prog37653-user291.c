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
    for(i=0;i<t;i++) {
        chk=test[i];
        if(chk>0&&chk<(n-1)) {
        if(ar[chk]<ar[chk-1]&&ar[chk]<ar[chk+1])
        printf("Yes\n");
        else
        printf("No\n"); }
        else if(chk==0) {
            if(ar[chk]<ar[chk+1])
            printf("Yes");
            else
            printf("No"); }
        else {
            if(ar[chk]<ar[chk-1])
            printf("Yes");
            else
            printf("No"); } }
	return 0; }
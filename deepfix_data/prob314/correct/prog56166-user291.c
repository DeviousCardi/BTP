#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,t;
     int ar[100];
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
        switch(chk) {
            case 0:
            if(ar[chk]<ar[chk+1])
            printf("Yes\n");
            else
            printf("No\n");
            break;
            case 5:
            if(ar[chk]<ar[chk-1])
            printf("Yes\n");
            else
            printf("No\n");
            default:
            if((ar[chk]<ar[chk-1])&&(ar[chk]<ar[chk+1]))
            printf("Yes\n");
            else
            printf("No\n"); } }
	return 0; }
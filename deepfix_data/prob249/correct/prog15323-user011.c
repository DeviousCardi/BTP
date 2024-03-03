#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,k,j,cnt=0;
    scanf("%d",&n);
    k=(n+1)/2;
    for (i=1;i<=k;i++) {
        for(j=1;j<=i;j++) {
           if(j==1) {
               printf("%(k)c",'*');
           cnt++; }
           else if(j>1&&j<i) {
            printf("%(k-cnt)c",' ');
            cnt++; }
           else {
            printf("%(k-cnt)c",'*'); }
        printf("\n");
        cnt=0; } }
    cnt=0;
    for(i=k-1;i>=1;i--) {
     for(j=1;j<=i;j++) {
         if(j==1) {
               printf("%(k)c",'*');
           cnt++; }
           else if(j>1&&j<i) {
            printf("%(k-cnt)c",' ');
            cnt++; }
           else {
            printf("%(k-cnt)c",'*'); }
        printf("\n");
        cnt=0; } }
    return 0; }
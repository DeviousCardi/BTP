#include <stdio.h>
#include <stdlib.h>
int main() {
int n,s[20];
int count,t;
scanf("%d\n",&n);
for(count=0;count<n;count++) {
    scanf("%d",&s[count]); }
    scanf("%d\n",&t);
    int ind[t],j,k;
    for(j=0;j<t;j++) {
      scanf("%d",&ind[j]); }
    for(k=0;k<t;k++)
    if(ind[k]!=0 && s[ind[k]]<s[ind[k]-1] && s[ind[k]]<s[ind[k]+1]) {
        printf("yes\n"); }
    else {
        printf("No\n"); }
	return 0; }
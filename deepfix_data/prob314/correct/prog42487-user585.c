#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,j;
	int c[20];
        scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c[i]); }
    int a[n];
        scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d",&a[j]);
     if(((a[j]==0)&&(c[a[j]]<c[a[j]+1]))||
         ((c[a[j]]<c[a[j]-1])&&(c[a[j]]<c[a[j]+1]))||((a[j]==n)&&(c[a[j]]<c[a[j]-1])))
         printf("Yes");
    else printf("No");
         printf("\n"); }
	return 0; }
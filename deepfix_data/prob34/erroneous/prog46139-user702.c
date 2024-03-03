#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,t,a[20],b[20],k;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",a[i]);
}scanf("%d",&t),
for(i=0;i<t;i++){
    scanf("%d",&b[i]);
}for(i=0;i<t;i++){
    k=b[i];
    if (a[k]==(n+1)) printf("Yes");
    else printf("No"); }
	return 0; }
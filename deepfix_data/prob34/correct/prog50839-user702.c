#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,t,a[n],b[n],k;
scanf("%d",&n);
if(n<=20){
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d",&b[i]);
}for(i=0;i<t;i++){
    k=b[i];
    if (a[k]>a[i]&&a[k]>b[i]) printf("Yes");
    else printf("No");
    printf("\n");
}}
	return 0; }
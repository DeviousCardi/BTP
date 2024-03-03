#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,s,j,n;
    int a[n];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%2d",&a[i]); }
    scanf("%d",&s);
    for(i=0;i<=n;i++){
        for(j=1;j!=i,j>i,j<=n;j++){
            if(a[i]+a[j]==s){
                printf("(%d,%d)\n",a[i],a[j]); } } }
	return 0; }
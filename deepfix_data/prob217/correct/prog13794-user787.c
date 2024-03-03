#include <stdio.h>
#include <stdlib.h>
int main() {
int a[100];
int n,i,j,s;
scanf("%d\n",&n);
for(i=0;i<n;i++){
scanf("%d ",&a[i]);}
scanf("%d\n",&s);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i]+a[j]==s && i!=j){
        printf("(%d,%d)",a[i],a[j]); } } }
	return 0; }
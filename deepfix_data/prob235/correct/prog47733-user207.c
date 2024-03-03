#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,k,a;
scanf("%d",&n);
for (k=1;k<=n;k++){
    if(k==1){
        i=(n+1)/2;
        printf("%d",i);}
        else{
for (j=i-1;j<=((n+1)/2)+(k-1);j++){
    printf("%d",j); }
            i=i-1; }
    for(a=i+1;a<=(n+1)/2-(k-1);a++){
        printf("%d",a); }
    printf("\n"); }
	return 0; }
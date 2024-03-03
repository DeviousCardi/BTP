#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,count;
scanf("%d\n",&n);
if(n>0&&n<pow(10,9))
for(i=1;i<n;i++){
    if (n%i==0)
    count=count+i; }
if(count==n){
    printf("YES");}
    if(count!=n){
        printf("NO"); } }
	return 0; }
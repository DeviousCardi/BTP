#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c,n;
for(n>0){
scanf("%d",&n);}
scanf("%d%d%d%d",&n,&a,&b,&c);
if((n%a==0&&n%b==0&&n%c==0) &&( n=a+b+c)) {
printf("YES"); }
else{
    printf ("NO"); }
	return 0; }
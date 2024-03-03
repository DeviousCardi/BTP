#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j;
char A[500];
for(j=0;j<=500;j++) {
    if(A[j]==0)break;
    return j; }
for(i=0;i<=j-1;i++) {
    scanf("s",A[i]); }
for(i=0;i<=j-1;i++)
while(A[i]!=A[j-i])continue; {
    if(A[i]!=A[j-i])
    printf("NO");
    else
    printf("YES"); }
	return 0; }
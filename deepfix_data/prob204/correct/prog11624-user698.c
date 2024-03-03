#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i=0;
    int A[100];
    int ch;
    ch=getchar();
    while(i<100&&ch!=EOF){
        A[i]=ch;
        ch=getchar();
        i++; }
    int t;
    for(i=0;i<n;i++){
        if(A[i]!=A[n-i-1])
        t++; }
    if(t>0)
     printf("NO");
     else printf("YES");
	return 0; }
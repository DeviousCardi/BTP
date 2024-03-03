#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,i;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int n= n1;
    int a1[n1];
    int a2[n2];
    if(n2 > n1)
       n=n2;
    int a[n+1];
    char ch= getchar();
    for(i=0;i<n1;i++) {
        if(ch== EOF)
         break;
        a1[i]= ch -46;
        ch= getchar(); }
    ch= getchar();
    for(i=0;i<n2;i++) {
        if(ch== EOF)
         break;
        a2[i]= ch - 46;
        ch= getchar(); }
    for(i=0;i<n1;i++) {
        printf("%d", a1[i]); }
	return 0; }
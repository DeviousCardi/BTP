#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,n,i;
    scanf("%d\n",&n);
    char Ar[20];
    for(i=0;i<n;i++) {
       scanf("%c\n",&Ar[i]); }
    scanf("%d",&t);
    int T[10];
    for(i=0;i<t;i++) {
      scanf("%d\n",&T[i]); }
    int b;
    for(i=0;i<t;i++) {
        b=T[i];
        if(b==0) {
            if(Ar[b]<Ar[b+1] || n==1)
              printf("Yes\n");
            else
              printf("No\n"); }
        else if(b==n-1) {
            if(Ar[b]<Ar[b-1] || n==1)
              printf("Yes\n");
            else
              printf("No\n"); }
        else {
            if(Ar[b]<Ar[b-1] && Ar[b]<Ar[b+1])
              printf("Yes\n");
            else
              printf("No\n"); } }
	return 0; }
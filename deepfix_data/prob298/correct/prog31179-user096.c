#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if (n==0)
    return 1;
    else
    return (catalan(n-1)*(4*n+2))/(n+2); }
    int main (){
        int n,ar[17];
        int i,j,a;
        scanf ("%d\n",&n);
       for (i=0;i<n;i++){
           scanf ("%d\n",&ar[i]); }
       for (i=0;i<n;i++){a=0;
           for (j=0;j<=17;j++){
               if (ar[i]==catalan(j))
               a=a+1; }
           if (a==1)
           printf ("yes\n");
           else
           printf ("no\n"); }
	return 0; }
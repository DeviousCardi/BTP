#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,res=0;
    if(n==0)
      return 1;
    for(i=0;i<n;i++) {
        res=res + catalan(i)*catalan(n-i-1); }
    return res; }
int main() {
    int t, inp_arr[20],i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&inp_arr[i]); }
    for(i=0;i<t;i++) {
        for(j=1;catalan(j)<inp_arr[i],j++)
        {};
        printf("%d\n",catalan(j)); }
	return 0; }
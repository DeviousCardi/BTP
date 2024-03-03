#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,a=0,b=0,i;
    scanf("%d",&n);
    int *t;
    t=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    scanf("%d",&t[i]);
    int j=n-1;
    i=0;
    while(i<=j) {
        if(t[i]>=t[j]) {
            j--;
            b++;
            t[i]=t[i]-t[j]; }
        else {
            i++;
            a++;
            t[j]=t[j]-t[i]; } }
	printf("%d %d",a,b);
	return 0; }
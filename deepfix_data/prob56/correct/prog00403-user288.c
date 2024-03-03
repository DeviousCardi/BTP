#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f1(int n)
{ int i;
    if(n==0||n==1)
    return 1;
    unsigned long int V=0;
    for(i=0;i<n;i++)
    V+=f1(i)*f1(n-i-1);
    return(V); }
int main() {
	int t,i,j,a[10000];
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf(" %d",&a[i]); }
    for(i=0;i<t;i++){
        for(j=0;j<10000;j++){
            if(a[i]<f1(j)){
                printf("%d\n",f1(j));
                break; } } }
        return 0; }
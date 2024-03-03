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
	int n=3,i,j,k,a[10000],a1[10000],a2[10000];long int max=100000000000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<10000;j++)
    a1[j]=f1(j);
    for(i=0;i<n;i++){
     for(j=0;j<10000;j++){
         if((a1[0]>a[i]))
            printf("%d\n",a1[0]);
         else if(a1[j]<a[i]&&a[i]<a1[j+1])
         printf("%d\n",a1[j+1]);
     }}
	return 0; }
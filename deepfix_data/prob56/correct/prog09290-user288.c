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
	int n,i,j,k,a[10000],a1[10000],a2[10000];long int max=100000000000;int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[1]); }
    for(j=0;j<15;j++){
          a1[j]=f1(j); }
        for(i=0;i<n;i++){
        if(a1[0]>a[i]){ }
    }printf("%d",a1[0]);
        for(i=0;i<n;i++){
        for(j=1;j<15;j++){
            if(a1[j]<=a[i]&&a[i]<a1[j+1])
            count=a1[j+1];
        }printf("%d\n",count);}
    return 0; }
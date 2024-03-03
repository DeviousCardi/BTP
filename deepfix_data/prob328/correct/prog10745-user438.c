#include <stdio.h>
#include <stdlib.h>
int fib_ser(int a[],int i) {
    a[0]=0;
    a[i]=a[i]+a[i-1];
    return i+1; }
int search(int a[],int n,int key) {
    if(n==0)
    return 0;
    if(a[n-1]==key)
    return 1;
    else
    return(a,n-1,key); }
int main(){
    int t;
    int a[1000],i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",a[i]); }
    int n=t;
    for(i=0;i<t;i++) {
        if(search(a,n,a[i])==1)
        printf("YES");
        else
        printf("NO"); }
	return 0; }
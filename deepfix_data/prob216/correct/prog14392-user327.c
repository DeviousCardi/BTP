#include <stdio.h>
#include <stdlib.h>
int Fibo(int n) {
        if(n==1)
        return 0;
        else if(n==2)
        return 1;
        else
        return (Fibo(n-1)+Fibo(n-2)); }
int main() {
	int t,arr[20],i;
	scanf("%d\n", &t);
	for(i=0;i<t;i++)
	scanf("%d\n", &arr[i]);
	for(i=0;i<t;i++)
	printf("%d\n", Fibo(arr[i]));
	return 0; }
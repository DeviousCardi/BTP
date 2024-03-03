#include <stdio.h>
#include <stdlib.h>
int main() {
	int t,arr[20];
	scanf("%d\n", &t);
	for(i=0;i<t;i++)
	scanf("%d\n" &arr[i]);
	for(i=0;i<l;i++)
	printf("%d\n", Fibo(arr[i]));
	return 0; }
int Fibo(int n) {
        if(n==1)
        return 0;
        else if(n==2)
        return 1;
        else
        return (Fibo(n-1)+Fibo(n-2)); }
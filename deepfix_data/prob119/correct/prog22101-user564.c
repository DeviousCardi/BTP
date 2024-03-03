#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
if (n==0)
return 0;
else return 2*hanoi(n-1)+1; }
int main() {
    int test_cases, arr[20],i,t;
    scanf("%d",&test_cases);
    for (i=0;i<test_cases;i++) {
        scanf("%d",&arr[i]); }
    for (i=0;i<test_cases;i++) {
        t=arr[i];
        printf("%d",hanoi(t)); }
	return 0; }
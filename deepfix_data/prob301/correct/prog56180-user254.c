#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=0, i=0, max=0, k=0, ans=1;
    scanf("%d", &n);
    long int array[n];
    for(i=0;i<n;i++)
        scanf("%ld", &array[i]);
    for(i=1;i<n;i++) {
        if(array[i]==array[i-1])
        k++;
        else {
            if(k>=max) {
                max=k;
                ans=array[i-1]; }
            k=0; } }
    printf("%d", ans);
	return 0; }
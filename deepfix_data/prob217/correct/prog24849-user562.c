#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    float arr[10000],s;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%f ",&arr[i]);
    scanf("%f",&s);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]+arr[j]==s)
            printf("(%f,%f)\n",arr[i],arr[j]); } }
	return 0; }
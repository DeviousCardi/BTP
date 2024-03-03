#include <stdio.h>
#include <stdlib.h>
void ele_peak(int a[],int b[],int c) {
    int i;
    for(i=0;i<c;i++) {
        if(a[ b[i] ] > a[ b[i]-1 ] && a[ b[i]+1 ])
            b[i]=1;
        else
            b[i]=0; } }
int main() {
    int arr[30],arr2[20],i,n,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d\n",%arr[i]);
    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%d",&arr2[i]);
    ele_peak(arr,arr2,t);
    for( i=0;i<t;i++) {
        if(arr2[i])
            printf("Yes\n");
        else
            printf("No\n"); }
	return 0; }
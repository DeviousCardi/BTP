#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,t;
    scanf("%d",&n);
    int a[n],ind[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&ind[i]); }
    for(i=0;i<t;i++) {
        if(ind[i]==0&&a[0]>a[1])
            printf("Yes\n");
        else
            if(ind[i]==n-1&&a[n-1]>a[n-2])
                printf("Yes\n");
            else
                if(a[ind[i]]>a[ind[i]+1]&&a[ind[i]]>a[ind[i]-1])
            printf("Yes\n");
        else
            printf("No\n"); }
	return 0; }
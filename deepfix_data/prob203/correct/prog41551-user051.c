#include <stdio.h>
int main() {
    int n,arr[50],i,j,flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        for(j=0;j<i;j++) {
            if(arr[i]==arr[j]) {
                flag=0;
                break; } } }
    if(flag==0)
        printf("YES");
    else
        printf("NO");
	return 0; }
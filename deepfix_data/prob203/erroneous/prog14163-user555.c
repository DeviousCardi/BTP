#include <stdio.h>
int main() {
    int n,i,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                flag++;
                break; } }
        if(flag)
          break; }
    if(flag)
        printf("YES");
    elseprintf("NO");
	return 0; }
#include <stdio.h>
int main() {
	int n, i, j, flag=0;
	int arr[50];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	    scanf("%d", &arr[i]);
	 for (i=0;i<n-1;i++) {
	     for (j=i+1;j<n;j++) {
	         if(arr[i]==arr[j]) {
	             printf("YES");
	             flag = 1;
	             break; } }
	     if(flag==1)
	        break; }
	 if (flag==0)
	    printf("NO");
	return 0; }
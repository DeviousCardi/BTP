#include <stdio.h>
#include <stdlib.h>
int main() {int i,n;
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i=i+1){
            scanf("%d",&a[n]); }
            for((i=1);(i<n);(i=i+1)){
            if(a[i]>a[i-1]&&a[i]>a[i+1])
            printf("Yes");
            break; }
            if(i==n-1)
            printf("No");
	return 0; }
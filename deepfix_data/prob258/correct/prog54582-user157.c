#include <stdio.h>
#include <stdlib.h>
int main() {int i,n;
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i=i+1){
            scanf("\n%d",&a[n]);
            printf("...%d",a[n]); }
            if(a[0]>a[1]) {
            printf("Yes"); }
            if(a[n-1]>a[n-2]) {
                printf("Yes2...%d ..%d",a[n-1],a[n-2]);
                return 0; }
            for((i=1);(i<n-1);(i=i+1)){
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                printf("Yes");
            break; }
            if(i==n-1)
            printf("No");
            else
                printf("Yes");
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {int i,n;
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i=i+1){
            scanf("\n%d",&a[n]);
            if(i==0) {
                if(a[0]>a[1])
                    printf("Yes");
                else
                    printf("No");
                continue; }
            if(i==n-1) {
                if(a[n-1]>a[n-2])
                    printf("Yes");
                else
                    printf("No");
                continue; }
            else{
                if( a[i]>a[i-1] && a[i]>a[i+1] )
                    printf("Yes");
                else
                    printf("No"); } }
	return 0; }
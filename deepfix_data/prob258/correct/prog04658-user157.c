#include <stdio.h>
#include <stdlib.h>
int main() {int i,n;
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i=i+1){
            scanf("\n%d",&a[n]); }
            for(i=0;(i<=n-1);(i=i+1)){
                if(n==1) {
                  printf("Yes");
                   break;}
                if(n==2) {
                    if(a[0]>a[1])
                   printf("Yes");
                   else
                   printf("No");
                   break;}
                if(a[0]>a[1]) {
                printf("Yes");
                break; }
            if(a[n-1]>a[n-2]) {
                printf("Yes1");
                break; }
            else
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                printf("Yes2");
            break; }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[1000];
    int i,k,l,n,count,z;
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        scanf("%d",&a[i]); }
        for(k=0;k<n;k++){
            z= a[k];
            count=0;
            for(l=k+1;l<n;l++){
                if(z>a[l])
                count=count+1;
                continue; }
            printf("%d ",count);
            continue; }
        printf(\n%d",count);
	return 0; }
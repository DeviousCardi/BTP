#include <stdio.h>
int main(){
            int n,i,j,k,min=200;
            scanf("%d",&n);
            int a[2*n];
            for(i=0;i<(2*n);i++)
            scanf("%d",&a[i]);
            for(i=0;i<(2*n);i++) {
                    for(j=i+1;j<(2*n);j++) {
                            for(k=0;k<n;k++) {
                                    if(a[i]==a[j])
                                        a[k]=(j-i); } } }
                    for(k=0;k<n;k++) {
                            if(a[k]<=min)
                            min=a[k]; }
                        printf("%d",min);
    return 0; }
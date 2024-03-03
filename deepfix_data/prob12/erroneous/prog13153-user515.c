#include <stdio.h>
int main() {
        int n,dis,min;
        min=2*n;
        scanf("%d",&n);
        int a[2*n];
        for(int i=0;i<2*n;i++) {
                scanf("%d ",&a[i]); }
        for(int j=0;j<(2*n-1);j++) {
                for(int k=j+1;k<2*n;k++) {
                        if(a[j])==a[k]) {
                                dis=k-j;
                                if(dis<min)
                                    min=dis;
                                break; } } }
        printf("%d",min);
        return 0; }
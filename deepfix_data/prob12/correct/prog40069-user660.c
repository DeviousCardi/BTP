#include<stdio.h>
int main() {
    int i,j,d,num[200],min=401,n,k;
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
        scanf("%d",&num[i]);
    for(j=0;j<2*n;j++) {
            for(k=j+1;k<2*n;k++)
                if(num[k]==num[j]) {
                        d=k-j;
                        if(d<min)
                            min=d;
                        break; } }
    printf("%d",min); }
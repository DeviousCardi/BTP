#include <stdio.h>
int main(){
    int n,i,j,min=2*n-1;
    scanf("%d",&n);
    int s[2*n];
    for(i=0;i<2*n;i++)
    scanf("%d",&s[i]);
    for(i=0;i<2*n;i++){
        for(j=i+1;j<2*n;j++){
            if (s[i]==s[j]) {
                if ((j-i)<min)
                    min=j-i; } } }
    printf("%d",min);
    return 0; }
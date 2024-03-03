#include <stdio.h>
int main() {
    int i,j,n,min=0,max=0;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&s[i]);}
        for(i=1;i<=n-1;i++){
            if (s[min]< s[i]){continue;}
            else{min = i;}}
        for(i=1;i<=n-1;i++){
            if (s[max]> s[i]){continue;}
            else{max = i;}}
    j = s[max];
    s[max] = s[min];
    s[min] =j;
    for(i=0;i<=n-1;i++){
        printf("%d ",s[i]);}
    printf("end");
    return 0; }
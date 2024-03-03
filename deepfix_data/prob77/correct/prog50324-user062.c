#include <stdio.h>
int main() {
    int i,j,n,b,min,max;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&s[i]);}
        for(i=0;i<=n-1;i++){
            for(j=0;j<=n-1;j++){
                if (s[i]>s[j]){
                    break;}
                    else{min = i ; break;}}}
        for(i=0;i<=n-1;i++){
            for(j=0;j<=n-1;j++){
                if (s[i]<s[j]){
                    break;}
                    else{max = i ; break;}}}
        b = s[max];
        s[max] = s[min];
        s[min] = b;
        for(i=0;i<=n-1;i++){
            printf("%d ",s[i]); }
    printf("end");
    return 0; }
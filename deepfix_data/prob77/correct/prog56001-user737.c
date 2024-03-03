#include <stdio.h>
int main() {
    int n,i,k,min,max;
    scanf("%d",&n);
    int money[n];
    for(i=0;i<n;i++) {
        scanf("%d",&money[i]); }
    for(i=0;i<n;i++) {
            for(k=0;k<n;k++)
            {if(money[i]<=money[k])
            {min=money[i];
            max=money[k];}
            else
            {min=money[k];
            max=money[i];}} }
        printf("%d %d",min,max);
    return 0; }
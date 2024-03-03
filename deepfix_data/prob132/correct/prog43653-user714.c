#include <stdio.h>
int main()
{int n,i,j,count,k;
scanf("%d",&n);
char str[2*n];
scanf("%s",str);
for(i=0;i<2*n-1;i++){
    k=str[i];
    for(j=0;j<2*n-1;j++){
        if(str[j]==k)
            count++; }
    if(count!=k){
    printf("No");
    break; } }
if(i==2*n-1)
    printf("Yes");
return 0; }
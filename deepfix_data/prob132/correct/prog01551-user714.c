#include <stdio.h>
int main()
{int n,i,j;
char k,count=0;
scanf("%d",&n);
char str[2*n];
scanf("%s",str);
printf("%c",count+1);
for(i=0;i<2*n-1;i=i+2){
    count=0;
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
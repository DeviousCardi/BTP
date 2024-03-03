#include <stdio.h>
int main() {
int n,i,num,RN;
int s[10];
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&num);
    s[i]=num;
    for(i=1;i<n;i++)
        {if(s[i]==num)
            {RN=num; }
        else continue; } }
 printf("%d",RN);
    return 0; }
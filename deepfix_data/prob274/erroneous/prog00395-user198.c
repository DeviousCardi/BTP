#include <stdio.h>
int main()
{int n,s[100],i,t=0,k=0;
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&s[i]); }
    for(i=0;i<n;i++)
    {t++;
        if(s[0]==[i+1]) {
            k++; }
        else
        {if(i!=1) {
            if(s[1]==s[i])
            k++; }
        else {
            if(i!=2) {
                if(s[2]==s[i])
                k++; }
            else {
                if(i!=3) {
                    if(s[3]==s[i])
                    k++; } } } } }
    printf("%d  ",t);
    printf("%d",k);
    return 0; }
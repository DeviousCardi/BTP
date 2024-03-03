#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,k,j=0;
    scanf("%d",&n);
        int c[20];
        for(i=0;i<n;i++)     {
            scanf("%d",&c[i]); }
        for(k=0;k<n;k++)   {
            if((k!=0)&&(k!=n-1))  {
            if((c[k]>c[k-1])&&(c[k]>c[k+1]))  {
                printf("Yes\n");
                break; }
            else  {
                j+=1;
            }   }
            else   {
                if(k==0)               {
                if((k==0)&&(c[k]>c[k+1]))  {
                printf("Yes\n");
                break;}
                else   {
                j=+1;
                }}
                else   {
                if((k==n-1)&&(c[k]>c[k-1]))   {
                    printf("Yes\n");
                    break; }
                else   {
                j++;
                }} } }
        if(j=n){
            printf("No"); }
        return 0; }
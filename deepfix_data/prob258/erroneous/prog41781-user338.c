#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,t;
    scanf("%d",&n);
        int c[20];
        for(i=0;i<n;i++)     {
            scanf("%d",&c[i]); }
        for(k=0;k<t;k++)   {
            if((k!=0)&&(k!=n-1))  {
            if((c[k]>c[k-1])&&(c[a[k]]>c[k+1]))  {
                printf("Yes\n"); }
            else  {
                printf("No\n");
            }   }
            else   {
                if(k==0)               {
                if((k==0)&&(c[k]>c[k+1]))  {
                printf("Yes\n");    }
                else   {
                    printf("No\n");
                }}
                else   {
                if((k==n-1)&&(c[k]>c[k-1]))   {
                    printf("Yes\n"); }
                else   {
                    printf("No\n");
                }} } }
        return 0; }
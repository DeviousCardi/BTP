#include <stdio.h>
int main() {
    int a,b,i,j,t,c,d;
    int n1[30],n2[30];
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {scanf("\n%d",&n1[i]);}
    scanf("\n%d",&b);
    for(j=0;j<=b;j++)
    {scanf("\n%d",&n2[i]);}
    for(i=0;i<=b;i++) {
        for(j=0;j<=a;j++) {
            if(n1[j]==n2[i]) {
                for(t=0;t<=10;t++)
                if((n1[j+t]==n2[i+t])&&i+t!=b)
                continue;
                else if((n1[j+t]==n2[i+t])&&i+t==b)
                printf("YES"); }
            else
            continue; } }
	return 0; }
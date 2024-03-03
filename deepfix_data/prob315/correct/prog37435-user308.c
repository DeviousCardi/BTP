#include <stdio.h>
int main() {
    int s[100],c[100];
    int n,i,j,c1=0;
    for(i=0;i<100;i++) {
        s[i]=0;
        c[i]=0; }
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&s[i]); }
    for(i=0; i<n-1; i++) {
        for(j=i+1;j<n;j++) {
            if(s[i]>s[j]&&i<j)
            c[i]++;c1++; } }
    printf("%d\n",c1);
    for(i=0;i<n;i++)
    {printf("%d ",c[i]);}
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,i,j,k,tmp;
    scanf("%d\n%d\n",&n,&m);
    char a[n],b[m];
    char s[502];
    scanf("%s\n",a);
    scanf("%s\n",b);
    for(i=0;i<m;i++)
    a[i]=a[i]-'0';
    printf("%s\n",a);
    printf("%s\n",b);
    for(j=0;j<n;j++)
    b[j]=b[j] - '0';
    void add(int x,int y) {
        for(i=x-1,j=y-1,k=0;i>=0;i--,k++,j--) {
            s[k]=(a[i]+b[j])%10;
            tmp=(a[i]+b[j])/10;
            s[k+1]=s[k+1]+tmp; } }
    if(m>=n)
    add(m,n);
    if(m<n)
    add(n,m);
    for(i=k;i>=0;i--)
    printf("%d",s[k]);
	return 0; }
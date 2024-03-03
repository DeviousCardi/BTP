#include <stdio.h>
#include <stdlib.h>
int max(int x,int y) {
    if(x>y)
    {return x;}
    else
    {return y;} }
int main() {
    int i,j,k,l,n,z,m;j =0; k =0;
    scanf("%d",&n);
    int a[n];i = 0;int b[n];
    while (i<n) {
        b[i] = 0;
        i++;
    }i =0;
    while(i<n) {
        scanf("%d",&a[i]);
        i++; }
    while(j<n) {
        while(k<n) {
            if(a[j]==a[k])
            {l++;}
            k++; }
    }k = 0;b[j] = l;j++;l = 0;
    z = max(b[0],b[1]);
    for(m=2;m<n;m++)
    { z = max(z,b[m]);}
    printf("%d",a[z]);
	return 0; }
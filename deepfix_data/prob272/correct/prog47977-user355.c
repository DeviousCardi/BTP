#include <stdio.h>
int main(){int a,b,n,T[1000],i;
scanf("%i%i%i",&a,&b,&n);
T[1]=a;T[2]=b;
for(i=3;i<=n;++i)
T[i]=T[i-1]+T[i-2]-2;
printf("%i",T[n]);
    return 0; }
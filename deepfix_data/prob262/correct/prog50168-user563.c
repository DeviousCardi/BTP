#include<stdio.h>
#include<strings.h>
void rev(int n )
{int num;
if (n==0)
return;
scanf("%d",&num);
rev(n-1);
printf("%d ",num); }
int main() {
    int n;
    scanf ("%d",&n);
    rev(n);
    return 0; }
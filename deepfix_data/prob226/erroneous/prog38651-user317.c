#include <stdio.h>
int cal(int,int);
int main() {
	int d,n,a[100];
	scanf("%d %d",&d,&n);
	for(int i=0;i<d;i++){
	    scanf("%d",&a[i]); }
	static int j=0;
	cal(d,a[j]);
	printf("%d",a);
	return 0; }
int cal(int d,int a){
    static int i=0;
    static int k=0;
    k+=a;
    if(d==0 || d==1)
    return k;
        else
    return cal(d--;a[i++]); }
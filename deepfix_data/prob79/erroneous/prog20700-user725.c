#include <stdio.h>
#include <stdlib.h>
int n,i=0,j=n-1,l;
int a[n];
int choc_alice=0,choc_bob=0;
void Alice (int i){
    if(i==j)return;
    while((t_alice<=t_bob)&&(i<j)){
        t_alice+=a[i];
        choc_alice++;
        i++;
        return bob(j); } }
void Bob (int j){
    if(i==j)return;
    while((t_alice>=t_bob)&&(i<j)){
        t_bob+=a[j];
        choc_alice++;
        j--;
        return alice(i); } }
int main() {
    scanf("%d",&n);
    for(l=0;l<n;l++){
        scanf("%d",a[l]); }
    t_alice=a[i];
    t_bob=a[j];
    if(t_alice<=t_bob) alice(1);
    else bob(n-1);
    printf("%d %d",choc_alice,choc_bob);
	return 0; }
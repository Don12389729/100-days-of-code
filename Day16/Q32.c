#include <stdio.h>
int main(){
    int n,x,r=0;
    scanf("%d",&n);
    x=n;
    while(x){
        r=r*10+x%10;
        x/=10;
    }
    printf(r==n?"Palindrome":"Not palindrome");
    return 0;
}

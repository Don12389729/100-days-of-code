#include <stdio.h>
int main(){
    int n,x,s=0,d,f,i;
    scanf("%d",&n);
    x=n;
    while(x){
        d=x%10;
        f=1;
        for(i=1;
        i<=d;
        i++)f*=i;
        s+=f;
        x/=10;
    }
    printf(s==n?"Strong number":"Not strong number");
    return 0;
}

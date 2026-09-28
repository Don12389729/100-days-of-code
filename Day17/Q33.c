#include <stdio.h>
int main(){
    int n,x,d=0,s=0,p,i;
    scanf("%d",&n);
    x=n;
    do{
        d++;
        x/=10;
    }
    while(x);
    x=n;
    while(x){
        p=1;
        for(i=0;
        i<d;
        i++)p*=x%10;
        s+=p;
        x/=10;
    }
    printf(s==n?"Armstrong":"Not Armstrong");
    return 0;
}

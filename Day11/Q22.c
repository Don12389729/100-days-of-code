#include <stdio.h>
int main(){
    float cp,sp;
    scanf("%f%f",&cp,&sp);
    if(sp>cp)printf("Profit %.0f%%",(sp-cp)*100/cp);
    else if(sp<cp)printf("Loss %.0f%%",(cp-sp)*100/cp);
    else printf("No Profit No Loss");
    return 0;
}

#include <stdio.h>
int main(){
    int n[]={33,8,7,11,54,77,13,16};
    int par;
    int p = 0;
    for(p=1 ; p<8;p++){
        if(n[p] % 2 == 0){
        par = n[p];
        printf("%d\n", par);
        }
    }
    return 0;

}
#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(z=x+y || x=y+z || y=x+z){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
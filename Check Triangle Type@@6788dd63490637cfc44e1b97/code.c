#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x=y=z){
        printf("Equilateral");
    }
    else if(x=y!=z && x!=y=z && x=z!=y){
        printf("Isosceles");
    }
    else(x!=y!=z){
        printf("Scalene");
    }
    return 0;
}
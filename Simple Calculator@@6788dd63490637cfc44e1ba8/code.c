#include<stdio.h>
int main(){
    int x,y;
    char operator;
    scanf("%d%d",&x,&y);
    scanf("%c",operator);
    switch(operator){
    case '+':printf("%d%c%d",&x,&y,operator, x+y);
    break;
    case '-':printf("%d%c%d",&x,&y,operator, x-y);
    break;
    case '*':printf("%d%c%d",&x,&y,operator, x*y);
    break;
    case '/':printf("%d%c%d",&x,&y,operator, x/y);
    break;
    default:printf("Invalid");
    return 0;
}
}
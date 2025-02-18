#include<stdio.h>
int main(){
    int x,y;
    char operator;
    scanf("%d",&x);
    scanf("%c",operator);
    scanf("%d",&y);
    switch(operator){
    case '+':printf("%d%d%c = %d",x,y,operator);
    break;
    case '-':printf("%d%d%c = %d",x,y,operator);
    break;
    case '*':printf("%d%d%c = %d",x,y,operator);
    break;
    case '/':printf("%d%d%c = %d",x,y,operator);
    break;
    default:printf("Invalid");
    return 0;
}
}
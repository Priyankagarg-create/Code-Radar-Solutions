#include<stdio.h>
int main(){
    Character x;
    scanf("%c",&x);
    if(x>='A' && x<='Z' || x>='a' && x<='z'){
        printf("%d",Consonant);
    }
    else if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U' ||
            x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        printf("%c",Vowel);
    }
    else if(x>=0 && x<=9){
        printf("%d",Digit);
    }
    else{
        printf("Special Character");
    }
    return 0;
}
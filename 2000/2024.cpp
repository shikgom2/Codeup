// cshs1405's Solution

#include<stdio.h> 
#include<string.h> 

char a[10][4]={"","일","이","삼","사","오","육","칠","팔","구"}; 
char b[10][8]={"","십","백","천","","십","백","천","","십"}; 
char c[11]; 

int main() 
{ 
    int i,count=0; 
    scanf("%s",&c);
    for(i=0;i<strlen(c);i++){
        if(c[i]=='0') count++;
        if(c[i]!='0'){ 
            printf("%s",a[c[i]-'0']); 
            printf("%s",b[strlen(c)-i-1]); 
        }
        if(strlen(c)-i-2==3){
            if(c[i]!='0' || c[i-1]!='0' || c[i-2]!='0' || c[i-3]!='0') printf("만");
        }
        if(strlen(c)-i-2==7){
            if(c[i]!='0' || c[i-1]!='0' || c[i-2]!='0' || c[i-3]!='0') printf("억");
        }
    }
    if(count==strlen(c)) printf("영");
    return 0; 
}

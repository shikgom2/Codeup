#include<stdio.h>
 
int stair(int n) {  
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1 + stair(1);
    else if (n == 3)
        return 1 + stair(1) + stair(2);
    else
        return stair(n - 3) + stair(n - 2) + stair(n - 1);
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", stair(num)); 
}

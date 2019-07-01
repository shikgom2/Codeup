 
#include<iostream>
using namespace std;
 
int n, cnt;
 
void input(){
    cin >> n;
}
void solution(){
    
    for(int a=1; a<n; a++){ 
        for(int b=a; b<n; b++){ // b>=a
            int c = n-(a+b);
            if(c < b) break; 
            if(b+a > c){
                printf("%d %d %d\n" , a,b,c);
                cnt++;
            }
        }
    }
    
}
 
int main(void){
    input();
    solution();
    
    if(cnt == 0)
    {
        printf("-1");
    }
    return 0;
}
 


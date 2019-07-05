#include <stdio.h>
int N;
int map[101][101];
long dp[101][101]={0,};
bool visited[101][101];
int main(){
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            scanf("%d",&map[i][j]);
    dp[0][0]=1;
    visited[0][0]=true;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(!visited[i][j]) continue;
            if(i==N-1 && j==N-1) break;
            int jump=map[i][j];
            if(i+jump < N){
                dp[i+jump][j] += dp[i][j];
                visited[i+jump][j] = true;
            }
            if(j+jump < N){
                dp[i][j+jump] += dp[i][j];
                visited[i][j+jump] = true;
            }
        }
    }
    printf("%ld\n",dp[N-1][N-1]);
}

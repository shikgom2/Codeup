#include <stdio.h>

int main()
{
 int arr[100][100]={0,};
 int num=0,i,j,cnt=1;
 scanf("%d",&num);

 for(i=0;i<num;i++){

  if(i%2==0){
   for(j=0;j<num;j++){
    arr[i][j]=cnt;
    printf("%d ",arr[i][j]);
    cnt++;
   }
     printf("\n");
  }
  else{
   for(j=0;j<num;j++){
    arr[i][j]=cnt;
    cnt++;
   }
   for(j=num-1;j>=0;j--){
    printf("%d ",arr[i][j]);
   }
    printf("\n");
  }
 }
 return 0;
}


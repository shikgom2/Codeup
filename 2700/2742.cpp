# include <stdio.h>

void bubble_sort(int list[], int n){
  int i, j, temp;

  for(i=n-1; i>0; i--){
    for(j=0; j<i; j++){
      if(list[j]<list[j+1]){
        temp = list[j];
        list[j] = list[j+1];
        list[j+1] = temp;
      }
    }
  }
}
int main(){
  int i;
  int n;

  scanf("%d", &n);

  int list[100001];

  for(i = 0; i<n;i++)
  {
    scanf("%d", &list[i]);
  }
  bubble_sort(list, n);

  int tmp;

  tmp = list[0];
  list[0] = list[n/2];
  list[n/2] = tmp;

  for(i=0; i<n; i++){
    printf("%d ", list[i]);
  }
}


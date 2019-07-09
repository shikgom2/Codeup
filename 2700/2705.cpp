main(){
    int n,i;
    int l, t;
    int count, temp, result;
    
    temp = -1;
    result = 0;
    count = 1;
    
    scanf("%d", &n);
    scanf("%d %d", &l, &t);
    int array[n+1];

    for (i = 0; i < n; i++ ){
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++ ){
        if(array[i] == array[i+1]){
            count++;
        }else{
            if(temp <= array[i]){
                result = result + 10000*count;
            }
            count = 1;
        }
        if(count >= l){
            temp = array[i] + t;
        }
    }
    printf("%d", result);
}

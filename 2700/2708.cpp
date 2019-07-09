main(){
    int n;
    int x, y;
    int x2, y2;
    int result = 0;

    x2 = -1;
    y2 = -1;

    scanf("%d", &n);
    scanf("%d %d", &x, &y);

    int array[n][n];

    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            scanf("%d", &array[i][j]);
        }
    }

    array[y-1][x-1] = 3;

    //Upside
    for ( int i = y-1; i > 0; i-- ){
        if(array[i-1][x-1] == 0)
            array[i-1][x-1] = 3;
        else if (array[i-1][x-1] == 2){
            y2 = i-1;
            x2 = x-1;
            break;
        }
        else
            break;
    }
    //Downside
    for ( int i = y-1; i < n-1; i++ ){
        if(array[i+1][x-1] == 0)
            array[i+1][x-1] = 3;
        else if (array[i+1][x-1] == 2){
            y2 = i+1;
            x2 = x-1;
            break;
        }
        else
            break;
    }
    //rightside
    for ( int i = x-1; i < n-1; i++ ){
        if(array[y-1][i+1] == 0)
            array[y-1][i+1] = 3;
        else if (array[y-1][i+1] == 2){
            y2 = y-1;
            x2 = i+1;
            break;
        }
        else
            break;
    }
    //leftside
    for ( int i = x-1; i > 0; i-- ){
        if(array[y-1][i-1] == 0)
            array[y-1][i-1] = 3;
        else if (array[y-1][i-1] == 2){
            y2 = y-1;
            x2 = i-1;
            break;
        }
        else
            break;
    }
    if(y2 != -1 && x2 != -1){
        //up
        for ( int i = y2; i > 0; i-- ){
            if(array[i-1][x2] == 0)
                array[i-1][x2] = 3;
            else
                break;
        }
        //down
        for ( int i = y2; i < n-1; i++ ){
            if(array[i+1][x2] == 0)
                array[i+1][x2] = 3;
            else
                break;
        }
        //right
        for ( int i = x2; i < n-1; i++ ){
            if(array[y2][i+1] == 0)
                array[y2][i+1] = 3;
            else
                break;
        }
        //left
        for ( int i = x2; i > 0; i-- ){
            if(array[y2][i-1] == 0)
                array[y2][i-1] = 3;
            else
                break;
        }
    }
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < n; j++ ){
            if(array[i][j] == 3)
                result = result + 1;
        }
    }
    if(result == 0){
        printf("0");
        return;
    }
    printf("%d", result-1);
}


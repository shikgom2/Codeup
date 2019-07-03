main(r,n,i,j,t){r=0;int a[4][4];for(i=0;i<4;i++)for(j=0; j<4;j++)scanf("%d",&a[i][j]);scanf("%d",&n);for(i=0;i<4;i++){for(j=0;j<4;j++){t=a[i][j];while(t>2){r=r+a[i][j];t=t/2;}}}printf("%d",r-n*4);}

int n,k,y=0;
void f(int p,int q,int r){
    if(p==n||q==k){
        y+=(q==k);
        return;
    }
    
    if(r==1){
        f(p+1,q,0);
    }
    else{
        f(p+1,q,0);
        f(p+1,q+1,1);
    }
}
main(){
    scanf("%d%d",&n,&k);
    f(0,0,0);
    printf("%d",y);
}


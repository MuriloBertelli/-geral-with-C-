double pow(double x, unsigned int n){
    if (n==0)
        return 1;
    else    
        return x*pow(x,n-1);

}

int main(){
    double x=4; int n=3;
    printf("%.2lf^%d=%.3lf",x,n,pow(x,n));
}
int subtractProductAndSum(int n) {
    int nn= n;
    int temp = 0;
    int m = 1;
    int a = 0;

    if(n==0){
        return 0;
    }

    while(n > 0){
        temp = n%10;
        n /=10;
        m*=temp;
        a+=temp;
    }

    int final = m-a;
    return final;
}
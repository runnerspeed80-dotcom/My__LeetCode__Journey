int subtractProductAndSum(int n) {
    int temp = 0;
    int mult = 1;
    int add = 0;

    if(n==0){
        return 0;
    }

    while(n > 0){
        temp = n%10;
        n /=10;
        mult*=temp;
        add+=temp;
    }

    int final = mult-add;
    return final;
}
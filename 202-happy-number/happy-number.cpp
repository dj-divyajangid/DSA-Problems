class Solution {
public:

int sumofdigits(int n){
    int sum = 0;

    while(n){
        sum = sum+((n%10) * (n%10));
        n/=10;
    }
    return sum;
}
    bool isHappy(int n) {
        while(n >4){
            n = sumofdigits(n);
            cout<<n<<"\n";
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }
};
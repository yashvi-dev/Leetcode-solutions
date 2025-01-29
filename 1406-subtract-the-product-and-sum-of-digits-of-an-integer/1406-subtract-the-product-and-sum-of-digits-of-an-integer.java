class Solution {
    public int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;

        while(n>0){
            int num= n%10;
            sum= sum+num;
            product = product*num;
            n=n/10;

        }
        return product-sum;
    }
}

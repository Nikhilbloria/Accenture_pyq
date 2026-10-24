class Solution {
    public int addDigits(int num) {
        int sum = 0;
        // while(num>9){
        //     while(num>0){
        //     int dig = num%10;
        //     sum+=dig;
        //     num/=10;
        //     }
        //     num = sum;
        //     sum = 0;
        // }
        // return num;

        while(num>0){
            int dig = num%10;
            sum+=dig;
            num/=10;            
        }
        if(sum<10){
            return sum;
        }else{
            return addDigits(sum);
        }
    }
}
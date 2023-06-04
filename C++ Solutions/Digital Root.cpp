
class Solution{
  public:
    //Complete this function
    int sumOf(int &n){
        if(n<=9)
            return n;
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        sumOf(sum);
    }
    
    int digitalRoot(int n)
    {
        //Your code here
        return sumOf(n);
    }
};

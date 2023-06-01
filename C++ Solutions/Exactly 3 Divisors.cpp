class Solution{
    public:
    
    bool isprime(int n){
        if(n==2 || n==3)
            return 1;
        if(n%2==0 || n%3==0)
            return 0;
        for(int i=5;i<=sqrt(n);i+=6){
            if(n%i==0 || n%(i+2)==0)return 0;
        }
        return 1;
    }
    
    int exactly3Divisors(int N)
    {
        //Your code here
        int count=0;
        if(N==1)
            return 0;
        
        for(int i=2;i<=sqrt(N);i++){
            count+=isprime(i);
        }
        return count;
        
    }
};

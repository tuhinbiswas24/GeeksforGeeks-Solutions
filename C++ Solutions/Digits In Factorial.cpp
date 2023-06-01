class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
        double fact=log10(1);
        for(int i=1;i<=N;i++){
            fact+=log10(i);
        }
        return floor(fact + 1);
    }
};

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m==n)
            return -1;
        int k=max(log2(m)+1,log2(n)+1);
        int a,b,i=1;
        while(i<=k){
            a=m%2;
            b=n%2;
            if(a!=b)
                return i;
            m>>=1;
            n>>=1;
            i++;
        }
    }
};

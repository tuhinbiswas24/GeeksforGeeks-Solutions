class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        if(a==b)
            return 0;
        int count=0;    
        int k=max(log2(a)+1,log2(b)+1);
        int m,n,i=1;
        while(i<=k){
            m=a%2;
            n=b%2;
            if(m!=n)
                count++;
            a>>=1;
            b>>=1;
            i++;
        }
        return count;
    }
};

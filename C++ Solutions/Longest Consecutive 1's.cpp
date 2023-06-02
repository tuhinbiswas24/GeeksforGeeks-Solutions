
/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int count=0,res=0;
        for(int i=0;i<log2(N)+1;i++){
            if(N&(1<<i)){
                count++;
                res=max(res,count);
            }
            else
                count=0;
        }
        return res;
    }
};

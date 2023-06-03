 
class Solution
{
    public:
    // Function for finding maximum AND value.
    int maxAND (int arr[], int N)
    {
        // Your code here
        int res=0;
        for(int bit=31;bit>=0;bit--){
            int count=0;
            res|=(1 << bit);
            for(int i=0;i<N;i++){
                if((arr[i] & res)==res){ // if arr[i] has bits on as that of res
                    count++;
                }
            }
            if(count<=1){
                res^=(1 << bit); // revert back
            }
        }
        return res;
    }
};

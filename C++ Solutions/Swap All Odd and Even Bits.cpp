
class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	vector<int> res(32,0);
    	for(int i=0;i<32;i++){
    	    if(n&(1<<i))
    	        res[i]++;
    	}
    	for(int i=0;i<32;i+=2){
    	    swap(res[i],res[i+1]);
    	}
    	int number=0;
    	for(int i=0;i<32;i++){
    	    number+=res[i]*pow(2,i);
    	}
    	return number; 
    }
};

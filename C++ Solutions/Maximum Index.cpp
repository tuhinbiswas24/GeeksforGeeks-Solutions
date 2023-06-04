class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        vector<pair<int,int>> p;
        for(int i=0;i<N;i++)
            p.push_back({A[i],i});
        sort(p.begin(),p.end());
        int a[N];
        int j=0;
        for(auto it:p){
            a[j]=it.second;
            j++;
        }
        int min=a[0],maxdiff=INT_MIN;
        for(int i=1;i<N;i++){
            if(min>a[i])
                min=a[i];
            maxdiff=max(maxdiff,a[i]-min);    
        }
        return maxdiff;
    }
};

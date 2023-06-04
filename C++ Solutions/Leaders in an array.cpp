
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> p;
        int leader=a[n-1];
        p.push_back(leader);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=leader){
                leader=a[i];
                p.push_back(leader);
            }
        }
        reverse(p.begin(),p.end());
        return p;
    }
};

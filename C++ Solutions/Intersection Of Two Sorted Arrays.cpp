 vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        //Your code here
        int i=0,j=0;
        vector<int> res;
        while(i<N && j<M){
            if(i>0 && arr1[i]==arr1[i-1]){
                i++;
                continue;
            }
            if(j>0 && arr2[j]==arr2[j-1]){
                j++;
                continue;
            }
            if(arr1[i]==arr2[j]){
                res.push_back(arr1[i]);
                i++;
                j++;
            }
            else if(arr1[i]<arr2[j])
                i++;
            else
                j++;
        }
        return res;
 }
};

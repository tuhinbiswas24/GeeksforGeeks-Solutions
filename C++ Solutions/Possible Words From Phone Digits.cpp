
class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    
    void phoneword(int a[],int N,vector<string> &ans, int index,string spt[],string op="")
    {
        if(N==index)
        {
            ans.push_back(op);
            return ;
        }
        string s=spt[a[index]];
        int l=spt[a[index]].length();
        for(int i=0;i<l;i++)
        {   
            phoneword(a,N,ans,index+1,spt,op+s[i]);
        } 
        return ;
    }
   
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> ans;
        string spt[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        phoneword(a,N,ans,0,spt,"");
        return ans;
    }
};

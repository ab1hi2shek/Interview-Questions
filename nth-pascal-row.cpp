
//Approach -1
//Time - O(A*A) space - O(A)
vector<int> getRow(int A) {
    
    vector<int> v;
    v.push_back(1);
    
    for(int i=1; i<=A; i++)
    {
        vector<int> temp;
        temp.push_back(1);
        
        for(int j=1; j<v.size(); j++)
            temp.push_back(v[j] + v[j-1]);
            
        temp.push_back(1);
        
        v.clear();
        for(int j=0; j<temp.size(); j++)
            v.push_back(temp[j]);
        temp.clear();
    }
    return v;
}

//Approach - 2
//Time - O(A) space - O(A)
vector<int> getRow(int A) {
    vector<int> ans(A+1);
    ans[0] = 1;
    for (int i=1;i<=A;i++)
    {
        ans[i] = (ans[i-1]*((A-i+1)))/i;
    }
    return ans  
}


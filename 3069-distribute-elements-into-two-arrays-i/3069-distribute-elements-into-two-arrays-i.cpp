class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        vector<int>a1;
        vector<int>a2;
        int i=1;
        int j=1;
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
    while(i+j<n){
        if(a1[i-1]>a2[j-1]){
            a1.push_back(nums[i+j]);
            i++;
        }
        else{
            a2.push_back(nums[i+j]);
            j++;
        }

    }
    
    for(int i=0;i<a1.size();i++){
        result.push_back(a1[i]);
    }
    for(int i=0;i<a2.size();i++){
        result.push_back(a2[i]);
    }
    return result;
    }
};
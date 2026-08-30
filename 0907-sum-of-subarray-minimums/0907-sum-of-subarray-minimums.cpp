class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long n=arr.size();
        vector<long long>smallerright(n);
        stack<long long>st;
        for(long long i=n-1;i>=0;i--){
            if(st.empty()){
                smallerright[i]=n;
                st.push(i);
            }
            else{
                while(!st.empty()&&arr[st.top()]>=arr[i]){
                    st.pop();
                }
                if(st.empty()){
                smallerright[i]=n;
                st.push(i);
            }
            else{
                smallerright[i]=st.top();
                st.push(i);
            }
            }
        }
        vector<long long>smallerleft(n);
        stack<long long>st2;
         for(long long i=0;i<n;i++){
            if(st2.empty()){
                smallerleft[i]=-1;
                st2.push(i);
            }
            else{
                while(!st2.empty()&&arr[st2.top()]>arr[i]){
                    st2.pop();
                }
                if(st2.empty()){
                smallerleft[i]=-1;
                st2.push(i);
            }
            else{
                smallerleft[i]=st2.top();
                st2.push(i);
            }
            }
        }
        long long ans=0;
        for(long long i=0;i<n;i++){
            ans=(ans%1000000007+((smallerright[i]-i)*(i-smallerleft[i])*arr[i])%1000000007)%1000000007;
        }
        return ans;

    }
};
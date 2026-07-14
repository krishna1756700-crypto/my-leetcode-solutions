class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int x=0;
        int count=0;
        for(int i=0;i<n;i++){
            count++;
            if(i==n-1||(i<n-1&&chars[i]!=chars[i+1])){
                chars[x++]=chars[i];
                if(count!=1){
                int z=x;
                while(count!=0){
                    chars[x++]=count%10+'0';
                    count/=10;
                }
                reverse(chars.begin()+z,chars.begin()+x);
            }
            else{
                count=0;
            }
            }
        }
        return x;

    }
};
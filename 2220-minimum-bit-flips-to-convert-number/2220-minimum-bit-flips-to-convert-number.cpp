class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c=0;
        for(int i=0;i<33;i++){
            if((start&1)!=(goal&1))c++;
            start=start>>1;
            goal=goal>>1;
        }
        return c;
    }
};
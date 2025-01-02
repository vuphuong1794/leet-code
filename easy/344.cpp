class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int l=0, r=s.size();
        while(l<r){
            temp=s[l];
            s[l]=s[r-1];
            s[r-1]=temp;
            l++;
            r--;
        }
    }
};
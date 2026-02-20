class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }else{
            string a = to_string(x);

            for(int i=0; i<=(a.size()-1)/2; i++){
                if(a[i]!=a[a.size()-i-1]){
                    return false;
                }
            }

            return true;
        }
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        long long z=0;
        for(int i=x;i>0;i=i/10){
            z=z*10 +(i%10);
            
        }
    if(z==x){
        return true;
    }
    else{return false;}
    }
};
        

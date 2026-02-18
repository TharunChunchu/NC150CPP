class Solution {
        int ll=pow(-2,31);
        int ul=pow(2,31)-1;
public:

    int reverse(int x) {
        int cn=0;
        while(x){
            int lu=x%10;
            x/=10;
           if(cn<ll/10 || cn>ul/10)return 0;   
           if( (cn==ll/10 && lu>8)  || (cn==ul/10 && lu>=7))return 0;   

           cn=cn*10+lu;
             
        }
        return cn;
    }
};
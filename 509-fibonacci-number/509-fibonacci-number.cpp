class Solution {
public:
    
    /**Recursion Solution 
    int fib(int N){ 
    if(N < 2){ 
    return N;}
    else{ 
    return fib(N-1) + fib(N-2);}
    }
    **/
    
    //DP Space Optimized 
    int fib(int N) {
        if (N == 0) return 0;
        int a = 0, b = 1;
        for(int i=2; i<=N; i++){
            int c = a + b;
            a = b;
            b = c;
        } return b;  
    }  
};
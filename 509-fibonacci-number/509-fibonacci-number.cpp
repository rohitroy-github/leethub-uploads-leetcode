class Solution {
public:
    
    //Recursion Solution 
    int fib(int N){ 
    if(N < 2){ 
    return N;}
    else{ 
    return fib(N-1) + fib(N-2);}
    }
};
/* fibonacci */
int Solution::findAthFibonacci(int A) {
    if(A==0)
        return 0;
    else if(A==1)
        return 1;
    
    return findAthFibonacci(A-1)+findAthFibonacci(A-2);
}

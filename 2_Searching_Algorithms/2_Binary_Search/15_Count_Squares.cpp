/* Binary Practice Problem: 15.
    Problem link: https://practice.geeksforgeeks.org/problems/count-squares3649/1

    int bisection Solution: 

int countSquares(int N) {
       int cnt;
        int l = 0, r = N;
        for(int i = 0; i < 100; i++){
            long long int mid = (l + r) >> 1;
            if((mid * mid) < N) {
                l = mid;
                cnt = l;
            }
            else 
                r = mid;
            
            
        }
        return cnt;
    }
    

*/
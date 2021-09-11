/* Binary Practice Problem: 14.
    Problem link: https://practice.geeksforgeeks.org/problems/square-root/1#
    Solution: 
    
double getRes ( double mid, long long int x){
    double res = mid * mid;
    if((int)res == x) return 1.0;
    return res;
    
    
}

long long int floorSqrt(long long int x) 
{
   
   double l = 1, r = x;
   while(l <= r){
       double mid = (l + r) / 2;
       if(getRes(mid, x) == 1.0){
           return (long long int)mid;
       }else if( (long long int)getRes(mid, x) > x) r = mid;
       else  l = mid;
   }
   
  
}

*/
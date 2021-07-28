/* 
    Map Practice Problem: 2.
    Problem link: https://practice.geeksforgeeks.org/problems/twice-counter4236/1
    Solution:
    
     int countWords(string list[], int n)
        {
            int res = 0;
          map<string, int> cnt;
          for(int i = 0; i < n ; i++){
              cnt[list[i]]++;
          }
          for(map<string, int>::iterator it = cnt.begin(); it != cnt.end(); it++){
              if(it->second == 2) res++;
          }
        return res;
        }
 */
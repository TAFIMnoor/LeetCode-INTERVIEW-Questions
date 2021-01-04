class Solution {
public:
    string longestPalindrome(string s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        
        int n=s.size(),m=0,l=0;
		
		for(int i=0; i<n; i++){
			for(int j=i; j<n; j++){
                int x=i,y=j,flag=1;
                while(x<=y){
                    if(s[x]==s[y])
                        x++,y--;
                    else {
                        flag=0;
                        break;
                    }
                }
                if(flag && j-i+1>m){
                    m=j-i+1,l=i;
                }
		   }
           if(m==n)
               break;
	   }
	   return s.substr(l,m);
        
    }
};

class Solution {
public:
	int strStr(string haystack, string needle) {
		int n = haystack.size();
		int nn = needle.size();
		int f1 = 0, f2 = 0;

		if (n == 0 && nn == 0)
			return 0;

		if (n == 0)
			return -1;

		if (nn == 0)
			return 0;

        for(int i=0;i<n-nn+1;i++)
        {  
            int j=0;
            for(;j<nn;j++)
            {
                if(haystack[i+j] != needle[j])   //point
                    break;                
            }
            if(j==nn)     //point，不加这句，从break出来直接返回i
                return i;
        }
        
        return -1;
	}
};

class Solution {
public:
    string countAndSay(int n) {
       
     if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        string str = "11";
        
        for(int j = 3 ; j <= n ; j++)       
        {
            str+='$';
            int count = 1;
            
            char arr[str.length()+1];
           
            strcpy(arr, str.c_str());
            
            string temp = "";
            
            for(int i = 1 ; i < str.length() ; i++)
            {
                if(arr[i]!=arr[i-1])
                {
                    temp+= to_string(count);
                    temp+= arr[i-1];
                    count = 1;
                }
                else
                    count++;
            }
            
            str = temp;
          
        }
           return str;
    }
};

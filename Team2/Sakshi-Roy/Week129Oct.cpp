q1. XOR Operations
class Solution {
public:
    int xorOperation(int n, int start) {
         uint16_t xor_ = 0;
        
        uint16_t i;
        for (i = 0; i < n; i++) 
        {
            xor_ ^= start + (i << 1);
        }
            
        return xor_;
    }
};

//q2. Create a target array in the given order
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
         vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int idx=index[i];
            int val=nums[i];
            ans.insert(ans.begin()+idx,val);
        }
        return ans;
    }
};

///Valid Palindrome
class Solution {
public:
    bool isPalindrome(string s) {
         string str;

    for(char c : s){
        if(isalnum(c)) {
            if((c >= 65 and c <= 90))
                c=c+32; // if char is Upper, convert to lower
            str+=c;
        }        
    }

    string rev = str;
    int n = rev.length()-1;
    int i = 0;

    // reverse the string
    while(i < n) {
        swap(rev[i],rev[n]);
        i++,n--;
    }

    if(str==rev)
        return true;
    return false;
    }
};

//Reverse Vowels
class Solution {
public:
    string reverseVowels(string s) {
         int j=0; 
    // Storing the vowels separately 
    string vowel; 
    for (int i=0; s[i]!='\0'; i++) 
        if (isVowel(s[i])) 
            vowel[j++] = s[i]; 
  
    // Placing the vowels in the reverse 
    // order in the string 
    for (int i=0; s[i]!='\0'; i++) 
        if (isVowel(s[i])) 
            s[i] = vowel[--j] ; 
  
    return s; 
    }
    bool isVowel(char c) 
{ 
    return (c=='a' || c=='A' || c=='e' || 
            c=='E' || c=='i' || c=='I' || 
            c=='o' || c=='O' || c=='u' || 
            c=='U'); 
} 
};


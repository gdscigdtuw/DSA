class Solution {
    public boolean isPalindrome(String s) {
        int si=0; int ei=s.length()-1;
        while(si<ei){
            while(Character.isLetterOrDigit(s.charAt(si))==false && si<ei)
                si++;
            while(Character.isLetterOrDigit(s.charAt(ei))==false && si<ei)
                ei--;
            if(Character.toUpperCase(s.charAt(si))!=Character.toUpperCase(s.charAt(ei)))
               return false;
               
             si++;
             ei--;
            
                
            
        }
               return true;
        
    }
}

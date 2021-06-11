class Solution {
    public String reverseVowels(String s) {
        char[] element = s.toCharArray();
        char temp = 'a';
        
        for(int start = 0 , end = element.length-1 ; start < end ; start++){
            
            if(isVowel(element[start])){ 
               
                while(end > start &&  !isVowel(element[end]) ) end--; 
                
                if(end > start){ // swaps them
                    temp = element[start];
                    element[start] = element[end];
                    element[end] = temp;
                    end--;
                }
                
            }
        }
        
        return String.valueOf(element);
        
        
        
    }
    
    public boolean isVowel(char element){
        
        if(element == 'a' ||element == 'e' ||element == 'i' ||element == 'o' ||element == 'u')
        {
         return true;   
        }
 else if(element == 'A' ||element == 'E' ||element == 'I' ||element == 'O' ||element == 'U')
        {
            return true;
        }
        
        return false;
        
    }
}

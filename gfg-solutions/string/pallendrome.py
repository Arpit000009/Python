def isPalindrome(s):
    #code here
    s = s.lower()
    
    rev = s[::-1]   #### reverse string
    
    
    return s==rev
    
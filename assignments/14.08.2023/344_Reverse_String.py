class Solution(object):
    

    def reverseString(self, s):

        def reverse(s, start, end):
        
            if start >= end:
                return
        
            s[start], s[end] = s[end], s[start]
        
            reverse(s, start + 1, end - 1)

        reverse(s, 0, len(s) - 1)
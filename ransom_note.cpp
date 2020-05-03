bool canConstruct(string ransomNote, string magazine) {
        
        int len = magazine.length();
        int r_len = ransomNote.length();

        // create an unordered map letterCount
        // key: letters in magazine
        // value: occurences of each letter in magazine
        unordered_map<char, int> letterCount;
        

        // update the occurences of each letter as we iterate through the string magazine
        for(int i =0; i<len; i++)
            letterCount[magazine[i]]++;
 
        // for each letter in ransom note, check if it is available in letterCount
        // if available, the count of letter in letterCount is decremented by 1
        // if not available return false
        for(int i = 0; i<r_len; i++)
        {
            unordered_map<char, int>::iterator x = letterCount.find(ransomNote[i]);
            if(x!=letterCount.end()&&(x->second>0))
                --x->second;
            else
                return false;
        }
        
        return true;
    }


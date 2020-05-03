bool canConstruct(string ransomNote, string magazine) {
        
        /*
        sort(string, string+ len);*/
        int len = magazine.length();
        unordered_map<char, int> letterCount;
        
        for(int i =0; i<len; i++)
            letterCount[magazine[i]]++;
 
        for(int i = 0; i<ransomNote.length(); i++)
        {
            unordered_map<char, int>::iterator x = letterCount.find(ransomNote[i]);
            if(x!=letterCount.end()&&(x->second>0))
                --x->second;
            else
                return false;
        }
        
        return true;
    }

#include<bits/stdc++.h>

int firstUniqChar(string s) {
        
    // create a hash table with the count of each character in string 
    unordered_map<char, int> list;
    for(int i =0; i<s.length(); i++)
        list[s[i]]++; 
    
    // look in the hash table for every character in string till the first character with count = 1 is seen
    for(int i =0; i<s.length(); i++)
    {
        if(list[s[i]]==1)
        return i;
    }
    return -1;
}
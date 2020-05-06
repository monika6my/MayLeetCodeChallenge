
int majorityElement(vector<int>& nums) {
        
	// count: hash table to store the count of each element in vector
	unordered_map<int, int> count;
        int maj;
	for(int i = 0; i<nums.size(); i++)
        {
	    // if count of i'th element is more than n/2 then it is a majority element	
            count[nums[i]]++;
            if(count[nums[i]]>nums.size()/2)
            {
                maj = nums[i];
                break;
            }
        }
        
	return maj;
}

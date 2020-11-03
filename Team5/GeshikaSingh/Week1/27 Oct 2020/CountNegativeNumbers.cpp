class Solution {
public:
    int SortedCount(const vector<int>& arr)
    {
    	auto iter = upper_bound(arr.begin(), end(arr), 0, greater<int>());

        // Move one forward if 0 was located (we dont' want to count)
	    if (iter != end(arr) && *iter == 0)
    	{
    		iter++;
    	}
    
    	return (int)(arr.end() - iter);
    }
    
    int countNegatives(vector<vector<int>>& grid) 
    {
        int negatives{};
        
        for(auto& V:grid)
        {
            negatives += SortedCount(V);
        }
        
        return negatives;
    }
};

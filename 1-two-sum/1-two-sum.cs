public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        
        var visited = new Dictionary<int,int>();
        
        for(int i = 0; i < nums.Length; i++)
        {
            var diff = target - nums[i];
            
            if(visited.ContainsKey(diff))
                return new int [] {visited[diff], i};
                
            visited[nums[i]]= i;
        }

        return new int[0];
    }
}
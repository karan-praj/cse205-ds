class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = []
        self._generate_subsets(nums, [], 0, result)
        return result
    
    def _generate_subsets(self, nums, current_subset, index, result):
        
        result.append(current_subset[:])
        
        for i in range(index, len(nums)):
            
            current_subset.append(nums[i])
            
            self._generate_subsets(nums, current_subset, i + 1, result)

            current_subset.pop()
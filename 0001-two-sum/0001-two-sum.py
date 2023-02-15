class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # numNeeded -> index
        m = {}
        for i, num in enumerate(nums):
            numNeeded = target - num
            if numNeeded in m:
                return [i, m[numNeeded]]
            else:
                m[num] = i
        return {}
                
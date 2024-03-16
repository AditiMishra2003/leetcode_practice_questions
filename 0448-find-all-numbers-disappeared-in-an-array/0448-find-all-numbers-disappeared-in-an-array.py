class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        for i in nums:
            i=abs(i)-1
            if  nums[i]>0:
                nums[i]*=-1
            
        ans=[]
        for i in range(len(nums)):
            if nums[i]>0:
                ans.append(i+1)
        return ans
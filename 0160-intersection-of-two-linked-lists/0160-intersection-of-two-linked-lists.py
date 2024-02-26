# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        def length_of_list(node):
            length=0
            while node:
                node=node.next
                length+=1
            return length
        
        a=length_of_list(headA)
        b=length_of_list(headB)
        while a>b:
        
            headA=headA.next
            a-=1
        while b>a:
            
            headB=headB.next
            b-=1   
        
        while headA and headB:
            if (headA==headB): return headA
            headA=headA.next
            headB=headB.next
        return None
            
            
            
            

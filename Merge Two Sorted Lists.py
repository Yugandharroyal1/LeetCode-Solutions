# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        l=[]
        while list1:
            l.append(list1.val)
            list1=list1.next
        while list2:
            l.append(list2.val)
            list2=list2.next
        l.sort()
        t=ListNode(0)
        s=t
        for i in l:
            s.next=ListNode(i)
            s=s.next
        return t.next

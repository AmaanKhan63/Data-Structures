class TreeNode:
    def __init__(self,val,left=None,right=None):
        self.val = val
        self.left = left
        self.right = right
    def add_child(self, val):
        if val == self.val:
            return
        if val < self.val:
            if self.left:
                self.left.add_child(val)
            else:
                self.left = TreeNode(val)
        else:
            if self.right:
                self.right.add_child(val)
            else:
                self.right = TreeNode(val)
    def get_value (self):

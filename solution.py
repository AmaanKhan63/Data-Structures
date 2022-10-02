class Solution:
    def nextGreaterNum(self, arr):
        # input 1D arr and output is a mapped array of all elemnts with their next greater number
        stack = [arr[0]]
        res = []
        for i in range(1, len(arr)):
            next_term = arr[i]
            if len(stack) > 0:
                element = stack.pop()
                while element < next_term:
                    res.append((element, next_term))
                    if len(stack) == 0:
                        break
                    element = stack.pop()
                if element > next_term:
                    stack.append(element)
            stack.append(next_term)
        while len(stack) > 0:
            element = stack.pop()
            next_term = -1
            res.append((element,next_term))
        return res
                
    def findCelebrity(self, arr):
        # input is a mXm array and output is the index of the celeb
        ref = None
        for i in range(len(arr)):
            if len(set(arr[i])) == 1 and arr[i][0] == 0:
                ref = i
        if ref is None:
            return -1
        for j in range(len(arr)):
            if j == ref:
                continue
            if arr[j][ref] != 1:
                return -1
        return ref

    def kTop(self, arr, k):
        # k-top question gfg (not working)
        mapp = dict()
        res = []
        for i in range(len(arr)):
            temp = arr[:i+1]
            if arr[i] in mapp:
                temp = [i for i in res[-1]]
                temp.remove(arr[i])
                y = "".join(temp)
                ele = arr[i] + y
                res.append(ele)
            else:
                temp.sort()
                ele = "".join(temp)
                res.append(ele)
            mapp[arr[i]] = mapp.get(arr[i], 0) + 1 
        return "".join(res)
    def insertElementInBST(self,num):
        pass
    def findIncEnd(self,arr):
        for i in range(len(arr)):
            if arr[i] > arr[i+1]:
                return i, i+1
    def replaceNum (self, arr):
        stack = list()
        for i in range(len(arr)-1, -1, -1):
            temp = arr[i]
            if stack:
                while stack and stack[-1] <= arr[i]:
                    stack.pop()
                if stack:
                    arr[i] = stack[-1]
                else:
                    arr[i] = -1
            else:
                arr[i] = -1
            stack.append(temp)

        return arr
        

if __name__ == "__main__":
    inp_arr = list(map(str, input().split()))
    print(Solution().replaceNum(inp_arr))

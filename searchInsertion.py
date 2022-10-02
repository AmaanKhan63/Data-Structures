def get_index (arr, val):
    for i in range(0, len(arr)):
        if arr[i] == val:
            return i

def searchInsertion(arr, val):
    index = 0
    if val in arr:
        index = get_index(arr, val)
        return index
    if val not in arr:
        if val > arr[-1]:
            return len(arr)
        prev = 0
        for i in range(0, len(arr)):
            if arr[i] < val and arr[i+1] > val:
                index = get_index(arr, arr[i]) + 1
                return index


nums = [1,3,5,6]
target = 7
print(searchInsertion(nums, target))

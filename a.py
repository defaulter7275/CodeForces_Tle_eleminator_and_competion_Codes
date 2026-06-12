import math
t = int(input())
for _ in range(t):
    n, x = map(int, input().split())
    nums = list(map(int, input().split()))
    mn = math.ceil(sum(nums) / x)
    mx = 0
    for num in nums:
        mx += math.ceil(num / x)
    print(mn, mx)
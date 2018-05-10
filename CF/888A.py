n = int(input())
cnt, nums = 0, list(map(int, input().split()))
for i in range(1, len(nums) - 1):
	if nums[i] > nums[i + 1] and nums[i] > nums[i - 1]:
		cnt += 1
	elif nums[i] < nums[i + 1] and nums[i] < nums[i - 1]:
		cnt += 1
print(cnt)


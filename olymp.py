import random


left = 1
n = 10e6
target = random.randint(left, n)

def check(l: int, r: int, target: int):
	amount = 0
	while l <= r:
		amount += 1
		mid = (l + r) // 2
		if mid == target:
			return (mid, amount)
		elif target > mid:
			l = mid + 1
		else:
			r = mid - 1 
	return (-1, amount)

print(target)
print(check(left, n, target))
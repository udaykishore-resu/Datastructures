
def find_pair(arr, k):
	sol=set()	
	for num in arr:
		if num in sol:
			print("Num",num)
			print("sol",sol)
			return True
		sol.add(k-num)
	return False





arr=[1,2,3,4,5,6,7,8,9]
k=9
find_pair(arr,k)

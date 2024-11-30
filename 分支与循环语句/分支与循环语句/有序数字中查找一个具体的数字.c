#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 10;		// k即为需要查找的数字
	int sz = (sizeof(arr)) / (sizeof(arr[0]));	// 求arr中元素的个数
	// 1.通过for循环遍历arr数组，进行查找
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i]) {
			printf("找到了，下标是%d\n", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("找不到");
	}
	// 2.通过二分查找解决
	int left = 0;		// 数组最左侧的下标
	int right = 9;		// 数组最右侧的下标

	while (left <= right)		// 当left <= right时意味着还有数字未被查找，所以仍需要进行循环
	{
		int mid = (left + right) / 2;	// 数组中间的下标，并且在每次查找后再次赋值，保证最后得到mid为下标
		if (arr[mid] < k)		// 意为数组中间的数小于k，则k在mid和right之间，接下来在mid右侧查找即可，所以将left变为mid+1
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)	// 与上文相同，此时只需考虑mid左侧即可，所以将right变为mid - 1
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	// 对于int mid = (left + right) / 2;求平均值的方法，为了防止left+right总值超过了int的范围可以采用其他写法
	// 如int mid = left+(right-left)/2;
	// 但是不能用int mid = left/2 + right/2;因为整数除法会导致丢失小数
	return 0;
}
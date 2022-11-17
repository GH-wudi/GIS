/**
 * C 语言: 经典排序算法
 *
 * @author wfh
 * @date 2022/11/11
 */
#include<stdio.h>
#include<stdlib.h>

void output(int a[], int l)
{
	for (int i = 0; i < l; i++)
	{
		printf("%d ", a[i]);
	}
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int a[], int l)
{
	for (int i = 0; i < l - 1; i++)//i<l-1
	{
		for (int j = 0; j < l - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}

void selectSort(int a[], int l)
{
	for (int i = 0; i < l - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < l; j++)//从后一个元素开始
		{
			if (a[min] > a[j])
				min = j;
		}
		swap(&a[min], &a[i]);
	}
}

void insertionSort(int a[], int l)
{
	for (int i = 0; i < l; i++)
	{
		int j = i - 1;
		int key = a[i];
		while (j >= 0 && key < a[j])//必须大于等于0，要考虑第一个元素
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;//j+1  赋值完之后还会再-1
		// for (int j = i + 1; j >= 0; j--)
		// {
		// 	if (a[j] < a[j - 1])
		// 		swap(&a[j], &a[j - 1]);
		// }
	}
}

void QuickSort(int a[], int low, int high)
{
	if (low > high)
		return;
	int i = low, j = high, temp, p = a[low];
	while (i < j)
	{
		while (a[j] >= p && i < j)	j--;
		if (i < j)
		{
			a[i] = a[j];
			i++;
		}
		while (a[i] <= p && i < j)	i++;
		if (i < j)
		{
			a[j] = a[i];
			j--;
		}
	}
	a[i] = p;
	QuickSort(a, low, i - 1);
	QuickSort(a, i + 1, high);
}

void merge(int a[], int low, int mid, int high)
{
	int* temp = (int *)malloc((high - low + 1) * sizeof(int));
	int i = low, j = mid + 1, k = 0;
	while (i <= mid && j <= high)//必须要有等于
	{
		if (a[i] < a[j])//可有等于可无等于
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}
	output(temp,(high - low + 1) * sizeof(int));
	printf("\n");
	while (i <= mid)  temp[k++] = a[i++];//必须要有等于
	while (j <= high) temp[k++] = a[j++];//必须要有等于

	for (i = 0; i < k; i++)
	{
		a[low + i] = temp[i];
	}
	free(temp);
}

//对当前区间进行归并排序
void mergeSort(int a[], int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;//括号没加出错
		mergeSort(a, low, mid);
		mergeSort(a, mid + 1, high);
		merge(a, low, mid, high);
	}
}


int main()
{
	int num[] = { 49,38,65,97,76,13,27,49 };
	// int num[] = {80,30,60,40,20,10,50,70};
	int len = sizeof(num) / sizeof(*num);
	printf("before:");
	output(num, len);
	printf("\n");
	// bubbleSort(num, len);	  //len
	// selectSort(num, len);      //len
	// insertionSort(num, len);   //len
	// QuickSort(num, 0, len - 1);//len-1
	mergeSort(num, 0, len - 1);//len-1
	printf("after :");
	output(num, len);
	return 0;
}
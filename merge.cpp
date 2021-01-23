#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int minIndex, int middleIndex, int maxIndex) {
	int left = minIndex;
	int right = middleIndex + 1;
	int count = maxIndex - minIndex + 1;
	int temp[1000];
	int index = 0;

	while ((left <= middleIndex) && (right <= maxIndex))
	{
		if (arr[left] < arr[right])
		{
			temp[index] = arr[left++];
			
		}
		else
		{
			temp[index] = arr[right++];
	
		}

		index++;
	}

	for (int i = left; i <= middleIndex; i++)
	{
		temp[index++] = arr[i];
		
	}

	for (int i = right; i <= maxIndex; i++)
	{
		temp[index++] = arr[i];
		
	}

	for (int i = 0; i < count; i++)
	{
		arr[minIndex + i] = temp[i];
	}

}

void MergeSort(int arr[], int minIndex, int maxIndex) {
	if (minIndex < maxIndex) {
		int middleImdex = (minIndex + maxIndex) / 2;
		MergeSort(arr, minIndex, middleImdex);
		MergeSort(arr, middleImdex + 1, maxIndex);
		Merge(arr, minIndex, middleImdex, maxIndex);
	}
}

int main()
{
	int arr[10000];
	int n;
	cin >> n;
	for(int i = 0; i <= n; i++)
	{
		cin >> arr[i];
		}
    MergeSort(arr, 0, n);
	
	for (int j = 0; j <= n; j++) {
		cout << arr[j] << " ";
	}
}

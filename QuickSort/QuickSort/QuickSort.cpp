#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> nums){
	for (auto iter = nums.begin(); iter != nums.end(); ++iter){
		cout << *iter << " ";
	}
	cout << endl;
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//choose the last one as pivot
int partition2(vector<int>& nums, int low, int high)
{
	int pivot = nums[high];
	int i = low - 1;
	int j, tmp;
	for (j = low; j<high; ++j)
	if (nums[j]<pivot){
		tmp = nums[++i];
		nums[i] = nums[j];
		nums[j] = tmp;
	}
	tmp = nums[i + 1];
	nums[i + 1] = nums[high];
	nums[high] = tmp;
	return i + 1;
}

//choose the first one as pivot
int partition1(vector<int>& nums, int low, int high){
	int pivot = nums[low];
	while (low < high){
		while (low < high && nums[high] >= pivot){ //scan from high to low, 
			--high;
		}
		swap(&nums[low], &nums[high]); //swap nums less than pivot to low
		while (low < high && nums[low] < pivot){
			++low;
		}
		swap(&nums[low], &nums[high]);
	}
		return low;
}

//choose the first one as pivot
int partition(std::vector<int> & nums, int low, int high)
{
	int p = low; //keep track the position of pivot number
	int pivot = nums[low];
	for (int i = p + 1; i <= high; ++i)
	{
		if (nums[i] < pivot)
		{
			swap(&nums[i], &nums[p]);  //swap the number smaller than the pivot and the pivot
			if (i != p + 1)  //there are nums larger than pivot, between nums[p] and nums[i]
			{
				swap(&nums[i], &nums[p + 1]); //here, nums[i] is pivot, and nums[p+1] is a num larger than pivot
			}
			p++; //keep the position of pivot
		}
	}

	return p;
}


void QuickSort(vector<int>& nums, int low, int high){
	if (low >= high){
		return;
	}
	int pos = partition1(nums, low, high);  //the position of pivot
	QuickSort(nums, low, pos - 1);
	QuickSort(nums, pos + 1, high);
}


int main(){
	//vector<int> v{ 49, 38, 65, 97, 76, 13, 27 };
	vector<int> v{ 4, 2, 5, 3, 4, 2, 6, 9, 1, 2, 8, 7 };
	cout << "The original vector is:" << endl;
	print(v);
	QuickSort(v, 0, 11);
	cout << "After QuickSort, the vector is:" << endl;
	print(v);

	return 0;
}



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//vector<vector<int>> fourSum(vector<int>& nums, int target) {
//	// write your code here
//	vector<vector<int>> res;
//	if (nums.size() < 4){
//		return res;
//	}
//	sort(nums.begin(), nums.end());
//
//	auto last = nums.end();
//	for (auto a = nums.begin(); a < prev(last, 3); a++){
//		while (a > nums.begin() && *a == *(a - 1)){//skip duplicates
//			continue;
//		}
//		for (auto b = next(a); b < prev(last, 2); b++){
//			while (b > next(a) && *b == *(b - 1)){//skip
//				continue;
//			}
//			auto c = next(b);
//			auto d = prev(last);
//			while (c < d){
//				if (*a + *b + *c + *d < target){
//					c++;
//					while (c < d && *c == *(c - 1)){//skip
//						c++;
//					}
//				}
//				else if (*a + *b + *c + *d > target){
//					d--;
//					while (c < d && *d == *(d + 1)){//skip
//						d--;
//					}
//				}
//				else{
//					res.push_back({ *a, *b, *c, *d });
//					++c;
//					--d;
//					while (c < d && *c == *(c - 1) && *d == *(d + 1)){//skip
//						c++;
//						d--;
//					}
//				}
//			}
//		}
//	}
//	//sort(res.begin(), res.end());
//	//res.erase(unique(res.begin(), res.end()), res.end());
//	return res;
//}

void print_vector(const vector<vector<int>>& v){
	for (const auto& row : v){
		for (const auto& elem : row){
			cout << elem << " ";
		}
		cout << endl;
	}
}




int main(){
	vector<vector<int>> v{ { 0, 2, 1, 3 }, { 3, 2, 4, 5 }, { 0, 1, 2, 2 }, { 0, 1, 2, 3 }, { 0, 7, 8, 9 }, { 1, 8, 9, 7, 6 },
	{ 0, 1, 2, 3 }, { 0, 7, 8, 9 } };
	cout << "The original vector: " << endl;
	print_vector(v);
	sort(v.begin(), v.end());
	cout << "After sorting, the vector is:" << endl;
	print_vector(v);
	/*cout << "After using unique keyword:" << endl;
	unique(v.begin(), v.end());
	print_vector(v);*/
	cout << "After combine using Unique and Erase keywords:" << endl;
	v.erase(unique(v.begin(), v.end()), v.end());
	print_vector(v);

	return 0;
}



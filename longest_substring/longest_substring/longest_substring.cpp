/*
Given a string, find the length of the longest substring without repeating characters. 
For example, the longest substring without repeating letters for "abcabcbb" is "abc", 
which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.
*/




#include<iostream>
#include <unordered_map>
#include <sstream>
using namespace std;




int lengthOfLongestSubstring1(string s)
{
	int length = 0, maxlength = 0, index_begin = 0, index_cur = 0;
	unordered_map<char, int> map;
	for (auto i : s)
	{
		auto j = map.find(i);
		if (j == map.end())
		{
			map.insert({ i, index_cur });
			index_cur++;
			length++;
		}
		else if (j->second<index_begin)
		{
			j->second = index_cur;
			index_cur++;
			length++;
		}
		else
		{
			index_begin = j->second + 1;
			maxlength = length>maxlength ? length : maxlength;
			length = index_cur - j->second;
			j->second = index_cur;
			index_cur++;
		}

	}
	return length>maxlength ? length : maxlength;

}



int lengthOfLongestSubstring2(string s)
{
	int length = 0, maxlength = 0, index_begin = 0, index_cur = 0;
	vector<int> map(128, -1);
	for (auto i : s)
	{
		if (map[i]<index_begin)
		{
			map[i] = index_cur;
			index_cur++;
			length++;
		}
		else
		{
			index_begin = map[i] + 1;
			maxlength = length>maxlength ? length : maxlength;
			length = index_cur - map[i];
			map[i] = index_cur;
			index_cur++;
		}

	}
	return length>maxlength ? length : maxlength;

}


//my implementation
int lengthOfLongestSubstring3(string s) {
	vector<int> mp(256, -1);   //use vector as a hashmap
	int len = 0, max_len = 0;
	int index_begin = 0, index_cur = 0;

	for (auto t : s){
		int pos = (int)t;

		if (mp.at(pos) < index_begin){  //not repeating 
			mp.at(pos) = index_cur;
			index_cur++;
			len++;
		}
		else{
			index_begin = mp.at(pos) + 1;  //repeating; now substring begins at the next character
			max_len = max_len > len ? max_len : len; //compare the max_len
			len = index_cur - mp.at(pos);   //update the current length of substring
			mp.at(pos) = index_cur;   //update the index for the repeating character
			index_cur++;   //update the current index
		}
	}
	return len > max_len ? len : max_len;  //return the max length of substring
}



int main(){
	string s1 = "aabbcc";
	cout << s1 << endl;
	string s2 = "abcagfgacbc";
	cout << s2 << endl;
	string s3 = "abcdaxv";
	cout << s3 << endl;

	cout << "the length of longest substring for s1: " << lengthOfLongestSubstring3(s1) << "\n" <<
		"the length of longest substring for s2: " << lengthOfLongestSubstring3(s2) << "\n" <<
		"the length of longest substring for s3: " << lengthOfLongestSubstring3(s3) << endl;
}


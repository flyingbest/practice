#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v1;

	v1.push_back(20);
	v1.push_back(30);

	cout << "insert test 1" << endl;

	// add first location.
	vector<int>::iterator iterInsertPos = v1.begin();
	v1.insert(iterInsertPos, 1, 100);

	// 100 20 30 순으로 print
	vector<int>::iterator iterEnd = v1.end();
	for(vector<int>::iterator iterPos = v1.begin(); iterPos != iterEnd; ++iterPos){
		cout << "v1 : " << *iterPos << endl;
	}
	cout << "insert test 2" << endl;

	// push 200 2pairs in second location.
	iterInsertPos = v1.begin();
	++iterInsertPos;
	v1.insert(iterInsertPos, 2, 200);
	
	// 100, 200, 200, 20, 30 순으로 print
	iterEnd = v1.end();
	for(vector<int>::iterator iterPos = v1.begin(); iterPos != iterEnd; ++iterPos){
		cout << "v1 : " << *iterPos << endl;
	}
	cout << "insert test 3" << endl;

	vector<int> v2;
	v2.push_back(1000);
	v2.push_back(2000);
	v2.push_back(3000);

	// push v2.add data in third location.
	iterInsertPos = v1.begin();
	++iterInsertPos;
	v1.insert(++iterInsertPos, v2.begin(), v2.end());
	
	// 100 200 1000 2000 3000 200 20 30 순으로 print
	iterEnd = v1.end();
	for(vector<int>::iterator iterPos = v1.begin(); iterPos != iterEnd; ++iterPos){
		cout << "v1 : " << *iterPos << endl;
	}
	return 0;
}

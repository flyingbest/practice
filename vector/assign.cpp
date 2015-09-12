#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v1;
	
	// 4를 7개 채운다.
	v1.assign(7, 4);

	int Count = v1.size();
	for(int i=0; i<Count; ++i){
		cout << "v1 : " << v1[i] << endl;
	}
	cout << endl;
	
	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(30);

	// v2의 요소로 채운다.
	v1.assign(v2.begin(), v2.end());
	Count = v1.size();
	for(int i=0; i<Count; ++i){
		cout << "v1 : " << v1[i] << endl;
	}
	cout << endl;
	return 0;
}


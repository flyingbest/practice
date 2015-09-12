#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<string> v1;

	v1.push_back("abc");	//1번째 : capacity=1	//원리 이해 1, 2, 4, 8.....증가
	v1.push_back("def");	//2번째 : 2

	v1.push_back("ghi");
	v1.push_back("jkl");	//4번째 : 4
	
	v1.push_back("mno");	//5번째 : 8
	
	/*
	v1.push_back("pqr");
	v1.push_back("stu");
	v1.push_back("vwx");	//8번째 : capacity=8
	v1.push_back("yzz");	//9번째 : 16

	v1.push_back("yzz");
	v1.push_back("이거정말");
	v1.push_back("8단위로");
	v1.push_back("끊기는");
	v1.push_back("건가?");
	v1.push_back("확인해보자");
	v1.push_back("제발 뭘까?");	//16번째 : 16
	
	v1.push_back("yzz");	//17번째 : 32 
	*/

	int Count = v1.size();
	int Capacity = v1.capacity();

	cout << "Count : " << Count << endl;
	cout << "Capacity: " << Capacity << endl;

	for(int i=0; i<Count; ++i){
		cout << "v1 : " << v1[i] << endl;
	}
	cout << endl;

	cout << "erase test 1" << endl;

	// delete first data
	v1.erase(v1.begin());
	
	// def ghi jkl mno 	print
	Count = v1.size();
	for(int i=0; i<Count; ++i){
		cout << "v1 : " << v1[i] << endl;
	}
	cout << endl << "erase test 2" << endl;

	// 첫번째 데이터에서 마지막까지 삭제
	vector<string>::iterator iterPos = v1.begin();
	v1.erase(iterPos, v1.end());

	if(v1.empty()){
		cout << "nothing in v1" << endl;
	}
	return 0;
}


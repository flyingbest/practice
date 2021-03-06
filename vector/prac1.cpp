/*
	 v.reserve(8) : 벡터의 메모리 공간(capacity)를 미리 할당. *추가할당 아님.
	 vector<int>::size_type : 벡터의 size의 반환 타입을 가져온다. (unsigned int)
	 v.resize(10) : 벡터의 원소 갯수를 수정한다. (size는 줄여도 capacity는 그대로다)
	 v.clear() : 벡터를 비운다. (capacity 크기는 그대로다.)
	 v.empty() : 벡터가 비워져 있는지 확인한다.

	 for문으로 vector를 탐색할 때, v.size() 만큼 i를 돌리려면, v.size()의 타입과 i가 같아야 한다.

	 v.capacity()는 벡터에 할당된 메모리 공간이다.
	 새로운 원소가 벡터에 추가되면 메모리 공간이 추가적으로 할당.
	 매번 새로운 원소가 들어올 때마다 새로운 메모리가 할당되는 것은 비효율적.
	 capacity가 모자랄 경우 capacity/2 만큼의 capacity를 늘려간다.
	 만약 입력될 원소의 갯수를 알 수 있다면 reverse를 사용해 미리 capacity 메모리를 할당해 놓으면 효율적.
	 
	 vector<int>().swap(v); : 임의 벡터와 swap을 하면서 벡터를 비우고 할당된 메모리(capacity)까지 해제.
	 v.front()는 벡터의 첫번째 요소를 반환, v.back()은 마지막 요소를 반환
	 벡터의 임의 요소를 접근하는 방법으로는 []연산자와 at멤버함수가 있다.
	 [] 연산자를 사용하면 접근이 빠르지만 범위 점검을 하지 않는다.
	 at() 멤버함수를 사용하여 접근하면 범위 점검을 수행하며, 범위에 벗어난 요소에 접근하면 out_of_range 예외를
	 throw 하여 예외를 처리할 수 있다.

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v1;
	v1.reserve(8);

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	for(int i=0; i<v1.size(); ++i){
		cout << "v1 : " << v1[i] << endl;
	}
	cout << endl;

	cout << "size : " << v1.size() << endl;
	cout << "capacity : " << v1.capacity() << endl;
	cout << "최대 저장 가능한 원소 개수" << endl;
	cout << "max_size : " << v1.max_size() << endl;	//최대 저장 가능한 원소 개수

	cout << endl << "-----resize(10)-----" << endl;
	v1.resize(10);

	cout << "size : " << v1.size() << endl;
	cout << "capacity : " << v1.capacity() << endl;
	cout << "최대 저장 가능한 원소 개수" << endl;
	cout << "max_size : " << v1.max_size() << endl;	//최대 저장 가능한 원소 개수

	cout << endl << "-----resize(32)-----" << endl;
	v1.resize(5);
	cout << "size : " << v1.size() << endl;
	cout << "capacity : " << v1.capacity() << endl;
	cout << "최대 저장 가능한 원소 개수" << endl;
	cout << "max_size : " << v1.max_size() << endl;	//최대 저장 가능한 원소 개수
	
	v1.clear();
	
	/*
	vector<int> v3(5);
	cout << "size : " << v3.size() << " capacity : " << v3.capacity() << endl;
	
	vector<int>().swap(v3);	//임의 벡터와 교환.
	cout << "size : " << v3.size() << " capacity : " << v3.capacity() << endl;
	
	vector<int> v4;
	v4.push_back(10);
	v4.push_back(20);
	v4.push_back(30);
	v4.push_back(40);
	v4.push_back(50);

	cout << v4[0] << ", " << v4.at(0) << ", " << v4.front() << endl;	//첫번째 원소

	v4.front() = 100;

	cout << v4[0] << ", " << v4.at(0) << ", " << v4.front() << endl;	//첫번째 원소
	
	try{
		cout << v3.at(10) << endl;
	}catch(out_of_range &e){
		cout << e.what() << endl;
	}
	*/

	return 0;
}


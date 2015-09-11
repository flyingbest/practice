#include <iostream>
#include <vector>
using namespace std;

struct RoomUser{
	int CharCd;	// 캐릭터 코드
	int Level;	// 레벨
};

int main(){
	RoomUser user1;
	user1.CharCd = 1;
	user1.Level = 10;

	RoomUser user2;
	user2.CharCd = 2;
	user2.Level = 5;

	RoomUser user3;
	user3.CharCd = 3;
	user3.Level = 12;

	// 방의 유저들을 저장할 vector
	vector<RoomUser> RoomUsers;

	// add
	RoomUsers.push_back(user1);
	RoomUsers.push_back(user2);
	RoomUsers.push_back(user3);

	// 방에 있는 유저 수
	int UserCount = RoomUsers.size();

	// 방에 있는 유저 정보 출력
	// 반복자로 접근 - 순방향
	for(vector<RoomUser>::iterator IterPos = RoomUsers.begin(); IterPos != RoomUsers.end(); ++IterPos){
		cout << "유저 코드 : " << IterPos->CharCd << endl;
		cout << "유저 레벨 : " << IterPos->Level << endl;
	}
	cout << endl;

	// 반복자로 접근 - 역방향
	for(vector<RoomUser>::reverse_iterator IterPos = RoomUsers.rbegin(); IterPos != RoomUsers.rend();	++IterPos){
		cout << "유저 코드 : " << IterPos->CharCd << endl;
		cout << "유저 레벨 : " << IterPos->Level << endl;
	}
	cout << endl;

	// 배열방식으로 접근
	for(int i=0; i<UserCount; ++i){
		cout << "유저 코드 : " << RoomUsers[i].CharCd << endl;
		cout << "유저 레벨 : " << RoomUsers[i].Level << endl;
	}
	cout << endl;

	// 첫 번재 유저 데이터 접근
	RoomUser& FirstRoomUser = RoomUsers.front();
	cout << "첫번째 유저의 레벨 : " << FirstRoomUser.Level << endl << endl;
	
	RoomUser& LastRoomUser = RoomUsers.back();
	cout << "마지막 유저의 레벨 : " << LastRoomUser.Level << endl << endl;

	// at을 사용하여 두 번째 유저의 레벨을 출력
	RoomUser& RoomUserAt = RoomUsers.at(1);
	cout << "두번째 유저의 레벨 : " << RoomUserAt.Level << endl << endl;
	
	RoomUserAt = RoomUsers.at(0);
	cout << "첫번째 유저의 레벨 : " << RoomUserAt.Level << endl << endl;

	// delete
	RoomUsers.pop_back();

	UserCount = RoomUsers.size();
	cout << "현재 방에 있는 유저 수 : " << UserCount << endl << endl;

	// 아직 방에 유저가 있다면 모두 삭제
	if(false == RoomUsers.empty()){
		RoomUsers.clear();
	}

	UserCount = RoomUsers.size();
	cout << "현재 방에 있는 유저 수 : " << UserCount << endl << endl;

	return 0;
}


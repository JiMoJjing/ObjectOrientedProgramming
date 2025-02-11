#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>

#include "FireStation.h"
#include "Firefighter.h"
#include "FireChief.h"
#include "TraineeFirefighter.h"
#include "Administrator.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// 소방서 생성.
	FireStation* fireStation = new FireStation();

	// 트럭 생성.
	Firetruck* truckOne = new Firetruck();

	// 소방관 생성.
	Firefighter* ronnie = new Firefighter("로니");
	fireStation->ClockIn(ronnie);
	Firefighter* james = new Firefighter("제임스");
	fireStation->ClockIn(james);
	
	// 수습 소방관 생성 및 테스트.
	Firefighter* bill = new TraineeFirefighter("빌");
	fireStation->ClockIn(bill);
	bill->ExtinguishFire();

	// 소방서장.
	FireChief* harry = new FireChief("해리", ronnie);
	fireStation->ClockIn(harry);
	truckOne->SetDriver(harry);
	harry->Drive(truckOne, Point(200, 300));

	// 관리자 생성.
	Administrator* taejun = new Administrator("관리자", "태준", "장");
	fireStation->ClockIn(taejun);

	// 출근부 호출.
	fireStation->RollCall();

	// 불끄기 위임.
	//harry->TellFirefighterToExtinguishFire(ronnie);
	harry->ExtinguishFire();

	// 다형성.
	FirefighterBase* stillHarry = harry;
	stillHarry->ExtinguishFire();

	// 드라이버 설정.
	truckOne->SetDriver(ronnie);

	// 소방차 이동.
	ronnie->Drive(truckOne, Point(10, 5));
	james->Drive(truckOne, Point(20, -3));
	
	// 드라이버 설정.
	truckOne->SetDriver(james);
	
	// 소방차 이동.
	james->Drive(truckOne, Point(20, -3));

	// 메모리 해제.
	delete truckOne;
	delete ronnie;
	delete james;
	delete bill;
	delete harry;
	delete taejun;
	delete fireStation;
	
	std::cin.get();
}
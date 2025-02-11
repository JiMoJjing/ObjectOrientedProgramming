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

	// �ҹ漭 ����.
	FireStation* fireStation = new FireStation();

	// Ʈ�� ����.
	Firetruck* truckOne = new Firetruck();

	// �ҹ�� ����.
	Firefighter* ronnie = new Firefighter("�δ�");
	fireStation->ClockIn(ronnie);
	Firefighter* james = new Firefighter("���ӽ�");
	fireStation->ClockIn(james);
	
	// ���� �ҹ�� ���� �� �׽�Ʈ.
	Firefighter* bill = new TraineeFirefighter("��");
	fireStation->ClockIn(bill);
	bill->ExtinguishFire();

	// �ҹ漭��.
	FireChief* harry = new FireChief("�ظ�", ronnie);
	fireStation->ClockIn(harry);
	truckOne->SetDriver(harry);
	harry->Drive(truckOne, Point(200, 300));

	// ������ ����.
	Administrator* taejun = new Administrator("������", "����", "��");
	fireStation->ClockIn(taejun);

	// ��ٺ� ȣ��.
	fireStation->RollCall();

	// �Ҳ��� ����.
	//harry->TellFirefighterToExtinguishFire(ronnie);
	harry->ExtinguishFire();

	// ������.
	FirefighterBase* stillHarry = harry;
	stillHarry->ExtinguishFire();

	// ����̹� ����.
	truckOne->SetDriver(ronnie);

	// �ҹ��� �̵�.
	ronnie->Drive(truckOne, Point(10, 5));
	james->Drive(truckOne, Point(20, -3));
	
	// ����̹� ����.
	truckOne->SetDriver(james);
	
	// �ҹ��� �̵�.
	james->Drive(truckOne, Point(20, -3));

	// �޸� ����.
	delete truckOne;
	delete ronnie;
	delete james;
	delete bill;
	delete harry;
	delete taejun;
	delete fireStation;
	
	std::cin.get();
}
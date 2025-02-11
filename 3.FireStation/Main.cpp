#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>

#include "Firefighter.h"
#include "FireChief.h"
#include "TraineeFirefighter.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// Ʈ�� ����.
	Firetruck* truckOne = new Firetruck();
	Firefighter* ronnie = new Firefighter("�δ�");
	Firefighter* james = new Firefighter("���ӽ�");
	
	// ���� �ҹ�� ���� �� �׽�Ʈ.
	Firefighter* bill = new TraineeFirefighter("��");
	bill->ExtinguishFire();

	// �ҹ漭��.
	FireChief* harry = new FireChief("�ظ�", ronnie);
	truckOne->SetDriver(harry);
	harry->Drive(truckOne, Point(200, 300));

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
	//delete truckOne;
	//delete ronnie;
	//delete james;
	//delete bill;
	//delete harry;
	
	std::cin.get();
}
#pragma once
#include "FirefighterBase.h"

class Firefighter : public FirefighterBase
{
public:
	Firefighter(const std::string& name)
		: FirefighterBase(name)
	{

	}

	virtual ~Firefighter() = default;

	// �Ҳ��� ( ExtinguishFire ).
	virtual void ExtinguishFire() override
	{
		std::cout << name << " �ҹ���� ���� ���� ����!\n";
		TrainHoseOnFire();
		TurnOnHose();
	}

	// ��� �Լ� ( �޼ҵ� ).
protected:
	virtual void TurnOnHose()
	{
		std::cout << "���� ������ �ֽ��ϴ�.\n";
	}

	virtual void TrainHoseOnFire()
	{
		std::cout << "ȣ���� ���� �߻��� ���� �ܳ��ϰ� �ֽ��ϴ�.\n";
	}
};
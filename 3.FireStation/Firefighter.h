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

	// 불끄기 ( ExtinguishFire ).
	virtual void ExtinguishFire() override
	{
		std::cout << name << " 소방관이 불을 끄고 있음!\n";
		TrainHoseOnFire();
		TurnOnHose();
	}

	// 멤버 함수 ( 메소드 ).
protected:
	virtual void TurnOnHose()
	{
		std::cout << "불이 꺼지고 있습니다.\n";
	}

	virtual void TrainHoseOnFire()
	{
		std::cout << "호스를 불이 발생한 곳에 겨냥하고 있습니다.\n";
	}
};
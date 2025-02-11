#pragma once

#include "FirefighterBase.h"

class FireChief : public FirefighterBase
{
public:
	FireChief(const std::string& name, FirefighterBase* numberOne = nullptr)
		: FirefighterBase(name), numberOne(numberOne)
	{
	}
	virtual ~FireChief()
	{

	}

	void TellFirefighterToExtinguishFire(FirefighterBase* colleague)
	{
		colleague->ExtinguishFire();
	}

	// ÀçÁ¤ÀÇ
	virtual void ExtinguishFire() override
	{
		if(numberOne != nullptr)
		{
			TellFirefighterToExtinguishFire(numberOne);
		}
	}

	const FirefighterBase* GetNumberOne() const { return numberOne; }
	void SetNumberOne(FirefighterBase* numberOne) { this->numberOne = numberOne; }


private:
	FirefighterBase* numberOne = nullptr;
};
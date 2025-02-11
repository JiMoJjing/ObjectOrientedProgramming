#pragma once
#include "Firetruck.h"
#include "Point.h"


class FirefighterBase
{
public:
	FirefighterBase(const std::string& name)
		: name(name)
	{

	}

	// 불끄기 ( ExtinguishFire ).
	// 순수 가상 함수.
	virtual void ExtinguishFire() = 0;

	// 운전 ( Drive ).
	void Drive(Firetruck* truckToDrive, const class Point& position)
	{
		if (truckToDrive->GetDriver() != this)
		{
			std::cout << "트럭의 운전자가 " << name << " (이)가 아님\n";
			return;
		}
		truckToDrive->Drive(position);
	}

	// Getter / Setter.
	const std::string GetName() const { return name; }
	void SetName(const std::string& name) {	this->name = name; }

protected:
	std::string name;
};
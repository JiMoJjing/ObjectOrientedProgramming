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

	// �Ҳ��� ( ExtinguishFire ).
	// ���� ���� �Լ�.
	virtual void ExtinguishFire() = 0;

	// ���� ( Drive ).
	void Drive(Firetruck* truckToDrive, const class Point& position)
	{
		if (truckToDrive->GetDriver() != this)
		{
			std::cout << "Ʈ���� �����ڰ� " << name << " (��)�� �ƴ�\n";
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
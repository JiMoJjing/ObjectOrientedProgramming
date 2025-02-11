#pragma once

#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

// ���� ���� (Forward Declaration).
// ��� ��ȯ ����.
// ������ �ӵ� ����.
// ������ �Ǵ� ���۷����� ��� ����.
// Ÿ���� ũ�⸦ ���� �Ǳ� ����.
class FirefighterBase;

class Firetruck
{
public:
	Firetruck()
	{
		ladder = new Ladder(10.f);
	}
	~Firetruck()
	{
		delete ladder;
	}

	void Drive(const Point& position)
	{
		if (driver == nullptr)
		{
			return;
		}

		std::cout << position << " ��ġ�� �ҹ��� �̵� ��.\n";
	}

	const Ladder* GetLadder() const { return ladder; }

	FirefighterBase* GetDriver() const { return driver; }
	void SetDriver(FirefighterBase* driver) { this->driver = driver; }

	Hose* GetHose() const { return hose; }
	void SetHose(Hose* hose) { this->hose = hose; }

private:
	FirefighterBase* driver = nullptr;
	Ladder* ladder = nullptr;
	Hose* hose = nullptr;
};
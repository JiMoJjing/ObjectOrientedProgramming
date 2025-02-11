#pragma once

#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

// 전방 선언 (Forward Declaration).
// 헤더 순환 참조.
// 컴파일 속도 개선.
// 포인터 또는 레퍼런스에 사용 가능.
// 타입의 크기를 몰라도 되기 때문.
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

		std::cout << position << " 위치로 소방차 이동 중.\n";
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
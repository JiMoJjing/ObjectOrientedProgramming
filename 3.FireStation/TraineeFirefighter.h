#pragma once

#include "Firefighter.h"

class TraineeFirefighter : public Firefighter
{
public:
	TraineeFirefighter(const std::string& name, bool hoseTrainedOnFire = false)
		: Firefighter(name), hoseTrainedOnFire(hoseTrainedOnFire)
	{

	}


protected:
	// 호스 켜기 (물).
	virtual void TurnOnHose() override
	{
		if (hoseTrainedOnFire)
		{
			Firefighter::TurnOnHose();
		}
		else
		{
			std::cout << "물이 엉뚱한 곳으로 튀고 있습니다.\n";
		}
	}

	// 호스 조준.
	virtual void TrainHoseOnFire() override
	{
		hoseTrainedOnFire = true;
		Firefighter::TrainHoseOnFire();
	}

private:
	// 호스가 불에 정확하게 조준되는지 여부를 결정.
	bool hoseTrainedOnFire = false;
};
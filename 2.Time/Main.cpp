#include <iostream>

class Time
{
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: hour(hour), minute(minute), second(second)
	{
	}

	void ShowTime()
	{
		std::cout << "[" << hour << "시 " << minute << "분 " << second << "초]\n";
	}

	void ShowTimeInSeconds()
	{
		std::cout << hour * 3600 + minute * 60 + second << "초\n";
	}


private:
	int hour = 0;
	int minute = 0;
	int second = 0;
};

class NameCard
{
public:
	NameCard(const std::string& name = "None", const std::string& phone = "010-0000-0000", const std::string& address = "서울시...", const std::string& rank = "사원")
		: name(name), phone(phone), address(address), rank(rank)
	{
	}

	void ShowData()
	{
		std::cout << "이    름:" << name << "\n";
		std::cout << "전화번호:" << phone << "\n";
		std::cout << "주    소:" << address << "\n";
		std::cout << "직    급:" << rank << "\n";
	}

private:
	std::string name = "";
	std::string phone = "";
	std::string address = "";
	std::string rank = "";
};

int main()
{
	//Time time1 = Time(10);            // 10시 0분 0초.
	//Time time2 = Time(10, 20);        // 10시 20분 0초.
	//Time time3 = Time(10, 20, 30);    // 10시 20분 30초.

	//time2.ShowTime();
	//time2.ShowTimeInSeconds();

	std::cout << "\n====================\n\n";

	// NameCard(이름, 전화번호, 주소, 직급);
	NameCard jang = NameCard("Jang Se Yun", "010-1111-1111", "서울시...", "Freelancer");
	jang.ShowData();

	std::cin.get();
}
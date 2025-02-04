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
		std::cout << "[" << hour << "�� " << minute << "�� " << second << "��]\n";
	}

	void ShowTimeInSeconds()
	{
		std::cout << hour * 3600 + minute * 60 + second << "��\n";
	}


private:
	int hour = 0;
	int minute = 0;
	int second = 0;
};

class NameCard
{
public:
	NameCard(const std::string& name = "None", const std::string& phone = "010-0000-0000", const std::string& address = "�����...", const std::string& rank = "���")
		: name(name), phone(phone), address(address), rank(rank)
	{
	}

	void ShowData()
	{
		std::cout << "��    ��:" << name << "\n";
		std::cout << "��ȭ��ȣ:" << phone << "\n";
		std::cout << "��    ��:" << address << "\n";
		std::cout << "��    ��:" << rank << "\n";
	}

private:
	std::string name = "";
	std::string phone = "";
	std::string address = "";
	std::string rank = "";
};

int main()
{
	//Time time1 = Time(10);            // 10�� 0�� 0��.
	//Time time2 = Time(10, 20);        // 10�� 20�� 0��.
	//Time time3 = Time(10, 20, 30);    // 10�� 20�� 30��.

	//time2.ShowTime();
	//time2.ShowTimeInSeconds();

	std::cout << "\n====================\n\n";

	// NameCard(�̸�, ��ȭ��ȣ, �ּ�, ����);
	NameCard jang = NameCard("Jang Se Yun", "010-1111-1111", "�����...", "Freelancer");
	jang.ShowData();

	std::cin.get();
}
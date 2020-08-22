#include <iostream>
#include <string>
using namespace std;
class PC;
class Processor
{
private:
	string name;
	float frequency; // GHz
	int number_Of_Cores;
	bool integrated_video;
public:
	Processor() : name("No user"), frequency(0), number_Of_Cores(0), integrated_video(-1)
	{	}
	Processor(string name, float freq, int numCor, bool intVid) : name(name), frequency(freq), number_Of_Cores(numCor), integrated_video(intVid)
	{	}
	void Print() const
	{
		cout << "\tProcessor" << endl;
		cout << "Name: " << name << endl;
		cout << "Frequency: " << frequency << endl;
		cout << "Number of cores: " << number_Of_Cores << endl;
		if (integrated_video == true)
		{
			cout << "Processor: Integrated video" << endl;
		}
		else if (integrated_video == false)
		{
			cout << "Processor: NO integrated video" << endl;
		}
	}
};

class Motherboard
{
private:
	string name;
	string connector_type;
	string form_factor;
	bool integrated_video_board;
public:
	Motherboard() : name("No name"), connector_type("Absent"),form_factor("Not set"), integrated_video_board(-1)
	{	}
	Motherboard(string name, string connType, string formFa, bool intVi) : name(name), connector_type(connType), form_factor(formFa), integrated_video_board(intVi)
	{	}
	void Print() const
	{
		cout << "\tMotherboard" << endl;
		cout << "Name: " << name << endl;
		cout << "Connector type: " << connector_type << endl;
		cout << "Form factor: " << form_factor << endl;
		if (integrated_video_board == true)
		{
			cout << "Motherboard: Integrated video" << endl;
		}
		else if (integrated_video_board == false)
		{
			cout << "Motherboard: NO integrated video" << endl;
		}
	}
};

class Ram
{
private:
	string name;
	int memory;
	int memory_frequency; // MHz
	int count;
public:
	Ram() : name("No name"), memory(0),memory_frequency(0), count(1)
	{	}
	Ram(string name, int memor, int memoryFre, int coun) : name(name), memory(memor), memory_frequency(memoryFre), count(coun)
	{	}
	void Print() const
	{
		cout << "\tRam" << endl;
		cout << "Name: " << name << endl;
		cout << "Memory: " << memory * count << endl;
		cout << "Memory frequency: " << memory_frequency << endl;
	}
};

class Graphics_card
{
private:
	string name;
	int memory_frequency_Grap; // MHz
	int memory_Grap;
public:
	Graphics_card() : name("No name"), memory_frequency_Grap(0), memory_Grap(0)
	{	}
	Graphics_card(string name, int memorFreq, int memoryG) : name(name), memory_frequency_Grap(memorFreq), memory_Grap(memoryG)
	{	}
	void Print() const
	{
		cout << "\tGraphics card" << endl;
		cout << "Name: " << name << endl;
		cout << "Memory frequency: " << memory_frequency_Grap << endl;
		cout << "Memory: " << memory_Grap << endl;
	}
};

class HDD
{
private:
	string name;
	int disk_space_HDD;
public:
	HDD() : name("No name"), disk_space_HDD(0)
	{	}
	HDD(string name, int spaceGb) : name(name), disk_space_HDD(spaceGb)
	{	}
	void Print() const
	{
		cout << "\tHDD" << endl;
		cout << "Name: " << name << endl;
		cout << "Disk space HDD: " << disk_space_HDD << endl;
	}
};

class SSD
{
private:
	string name;
	int disk_space_SSD;
public:
	SSD() : name("No name"), disk_space_SSD(0)
	{	}
	SSD(string name, int spaceGb) : name(name), disk_space_SSD(spaceGb)
	{	}
	void Print() const
	{
		cout << "\tSSD" << endl;
		cout << "Name: " << name<<endl;
		cout << "Disk space HDD: " << disk_space_SSD << endl;
	}
};

class Case
{
private:
	string name;
	bool availability_of_the_power_supply;
	int space_extra_cooler;
public:
	Case() : name("No name"), availability_of_the_power_supply(-1), space_extra_cooler(0)
	{	}
	Case(string name, bool t_f, int num) : name(name), availability_of_the_power_supply(t_f), space_extra_cooler(num)
	{	}
	void Print() const
	{
		cout << "\tCase" << endl;
		cout << "Name: " << name << endl;;
		cout << "Availability of the power supply: " << availability_of_the_power_supply << endl;
		cout << "Space extra cooler: " << space_extra_cooler << endl;

	}
};

class Power_supply
{
private:
	string name;
	int power;
public:
	Power_supply() : name("No name"), power(0)
	{	}
	Power_supply(string name, int pow) : name(name), power(pow)
	{	}
	void Print() const
	{
		cout << "\tPower supply" << endl;
		cout << "Name: " << name << endl;;
		cout << "Power: " << power << endl;
	}
};

class Admin
{
private:
	string admin_Name;
	int age;
	friend PC;
public:
	Admin() : admin_Name("Noo"), age(0)
	{	}
	Admin(string name, int age) : admin_Name(name), age(age)
	{	}
	void Print() const
	{
		cout << "\tAdmin" << endl;
		cout << "Name admin: " << admin_Name << "\tAge: " << age << endl;
	}
};

class Guest
{
private:
	string guest_Name;
	int age;
	friend PC;
public:
	Guest() : guest_Name("Noo"), age(0)
	{	}
	Guest(string name, int age) : guest_Name(name), age(age)
	{	}
	void Print() const
	{
		cout << "\tGuest" << endl;
		cout << "Name guest: " << guest_Name << "\tAge: " << age << endl;
	}
};

class PC
{
private:
	string assembly_name;
	Case casee;
	Motherboard motherboard;
	Power_supply power_supply;
	Processor processor;
	Graphics_card graphics_card;
	Ram ram;
	HDD hDD;
	SSD sDD;
	Admin adminn;
	Guest guestt;
public:
	PC(string assemblyN, Processor& processor, Motherboard& motherboard, Ram& ram, Graphics_card& graphics_card, HDD& hDD, SSD& sDD, Case& casee, Power_supply& power_supply, Admin admin)
	{
		this->assembly_name = assemblyN;
		this->processor = processor;
		this->motherboard = motherboard;
		this->ram = ram;
		this->graphics_card = graphics_card;
		this->hDD = hDD;
		this->sDD = sDD;
		this->casee = casee;
		this->power_supply = power_supply;
		this->adminn = admin;
	}
	PC(string assemblyN, Processor& processor, Motherboard& motherboard, Ram& ram, Graphics_card& graphics_card, HDD& hDD, SSD& sDD, Case& casee, Power_supply& power_supply, Guest guest)
	{
		this->assembly_name = assemblyN;
		this->processor = processor;
		this->motherboard = motherboard;
		this->ram = ram;
		this->graphics_card = graphics_card;
		this->hDD = hDD;
		this->sDD = sDD;
		this->casee = casee;
		this->power_supply = power_supply;
		this->guestt = guest;
	}

	void Print() const
	{
		cout <<"\t" <<assembly_name << endl;
		casee.Print();
		motherboard.Print();
		power_supply.Print();
		processor.Print();
		graphics_card.Print();
		ram.Print();
		hDD.Print();
		sDD.Print();
		if (adminn.admin_Name != "Noo")
		{
			adminn.Print();
		}
		if (guestt.guest_Name != "Noo")
		{
			guestt.Print();
		}
		
	}
};



int main()
{
	Processor proc("INTEL Core i9 9900K",3.6,8,1);
	Motherboard moth("ASUS ROG STRIX Z390-F", "Socket 1151", "ATX", 0);
	Ram ram("Vengeance LPX CORSAIR", 32, 3000, 2);
	Graphics_card graph("ASUS GeForce RTX2080 Ti", 14000, 11);
	HDD hdd("Western digital", 10000);
	SSD sdd("Kingston", 960);
	Case casee("Cougar Panzer EVO", 0, 10);
	Power_supply powerS("Seasonic PRIME Platinum", 1000);

	Admin admin("Andrey", 17);
	Guest guest("Guest", 20);

	PC pc("Dream Assembly", proc, moth, ram, graph, hdd, sdd, casee, powerS, admin);
	pc.Print();

	return 0;
}
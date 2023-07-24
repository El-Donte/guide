#pragma once
class guide
{
	std::string company;
	std::string owner;
	std::string number;
	std::string address;
	std::string career;
public:
	guide(std::string com, std::string own, std::string num, std::string adr, std::string cre,const char* path);
	void FindCompany(std::string com, const char* path);
	void FindOwner(std::string own, const char* path);
	void FindCareer(std::string cre, const char* path);
	void FindNumber(std::string num, const char* path);

	void Add(const char* path);
	void Show(const char* path);
};


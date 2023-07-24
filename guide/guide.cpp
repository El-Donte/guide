#include <iostream>
#include <fstream>
#include <string>
#include "guide.h"

guide::guide(std::string com, std::string own, std::string num, std::string adr, std::string cre, const char* path) {
	company = com;
	owner = own;
	number = num;
	address = adr;
	career = cre;

	std::ofstream fout;
	try
	{
		fout.open(path, std::ios_base::app | std::ios_base::out);
		if (!fout.is_open()) {
			throw std::invalid_argument("Error: can`t open file");
		}
		else {
			fout << company << '\n';
			fout << owner << '\n';
			fout << number << '\n';
			fout << address << '\n';
			fout << career << '\n';
			//fout << '\n';
		}
		fout.close();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void guide::FindCompany(std::string com, const char* path) {
	std::ifstream fin;
	try
	{
		fin.open(path, std::ios_base::in);
		if (!fin.is_open()) {
			throw std::invalid_argument("Error: can`t open file");
		}
		else {
			while (!fin.eof()) {
				std::getline(fin,company);
				if (strcmp(company.c_str(), com.c_str()) == 0) {
					std::getline(fin, owner);
					std::getline(fin, number);
					std::getline(fin, address);
					std::getline(fin, career);

					std::cout << "---" << company << "---" << std::endl;
					std::cout << "   " << owner << std::endl;
					std::cout << "   " << number << std::endl;
					std::cout << "   " << address << std::endl;
					std::cout << "   " << career << std::endl;
					std::cout << std::endl;
					break;
				}
			}

		}
		fin.close();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void guide::FindOwner(std::string own, const char*  path) {
	std::ifstream fin;
	try
	{
		fin.open(path, std::ios_base::in);
		if (!fin.is_open()) {
			throw std::invalid_argument("Error: can`t open file");
		}
		else {
			while (!fin.eof()) {
				std::getline(fin, company);
				std::getline(fin, owner);
				std::getline(fin, number);	
				std::getline(fin, address);
				std::getline(fin, career);
				if (strcmp(owner.c_str(), own.c_str()) == 0) {
					std::cout << "---" << company << "---" << std::endl;
					std::cout << "   " << owner << std::endl;
					std::cout << "   " << number << std::endl;
					std::cout << "   " << address << std::endl;
					std::cout << "   " << career << std::endl;
					std::cout<< std::endl;
					break;
				}
			}

		}
		fin.close();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void guide::FindCareer(std::string cre, const char* path) {
	std::ifstream fin;
	try
	{
		fin.open(path, std::ios_base::in);
		if (!fin.is_open()) {
			throw std::invalid_argument("Error: can`t open file");
		}
		else {
			while (!fin.eof()) {
				std::getline(fin, company);
				std::getline(fin, owner);
				std::getline(fin, number);
				std::getline(fin, address);
				std::getline(fin, career);
				if (strcmp(career.c_str(), cre.c_str()) == 0) {
					std::cout << "---" << company << "---" << std::endl;
					std::cout << "   " << owner << std::endl;
					std::cout << "   " << number << std::endl;
					std::cout << "   " << address << std::endl;
					std::cout << "   " << career << std::endl;
					std::cout<< std::endl;
					break;
				}
			}

		}
		fin.close();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void guide::FindNumber(std::string num, const char* path) {
	std::ifstream fin;
	try
	{
		fin.open(path, std::ios_base::in);
		if (!fin.is_open()) {
			throw std::invalid_argument("Error: can`t open file");
		}
		else {
			while (!fin.eof()) {
				std::getline(fin, company);
				std::getline(fin, owner);
				std::getline(fin, number);
				std::getline(fin, address);
				std::getline(fin, career);
				if (strcmp(number.c_str(), num.c_str()) == 0) {
					std::cout << "---" << company << "---" << std::endl;
					std::cout << "   " << owner << std::endl;
					std::cout << "   " << number << std::endl;
					std::cout << "   " << address << std::endl;
					std::cout << "   " << career << std::endl;
					std::cout<< std::endl;
					break;
				}
			}

		}
		fin.close();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void guide::Add(const char* path) {
	std::cout << "Enter the Company: " << std::endl;
	std::getline(std::cin,company);
	std::cout << "Enter the Owner: " << std::endl;
	std::getline(std::cin, owner);
	std::cout << "Enter the Number: " << std::endl;
	std::getline(std::cin, number);
	std::cout << "Enter the Address: " << std::endl;
	std::getline(std::cin, address);
	std::cout << "Enter Career: " << std::endl;
	std::getline(std::cin, career);
	std::cout << std::endl;

	std::ofstream fout;
	try
	{
		fout.open(path, std::ios_base::app | std::ios_base::out);
		if (!fout.is_open()) {
			throw std::invalid_argument("Error: can`t open file");
		}
		else {
			fout << company << '\n';
			fout << owner << '\n';
			fout << number << '\n';
			fout << address << '\n';
			fout << career << '\n';
			//fout << '\n';
		}
		fout.close();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void guide::Show(const char* path) {
	std::ifstream fin;
	try
	{
		fin.open(path, std::ios_base::in);
		if (!fin.is_open()) {
			throw std::invalid_argument("Error: can`t open file");
		}
		else {
			while (!fin.eof()) {
				company = " "; owner = " "; number = " "; address = " "; career = " ";

				std::getline(fin, company);
				std::getline(fin, owner);
				std::getline(fin, number);
				std::getline(fin, address);
				std::getline(fin, career);

				if (company != "") {
					std::cout << "---" << company << "---" << std::endl;
					std::cout << "   " << owner << std::endl;
					std::cout << "   " << number << std::endl;
					std::cout << "   " << address << std::endl;
					std::cout << "   " << career << std::endl;
					std::cout<< std::endl;
				}
				
			}

		}
		fin.close();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

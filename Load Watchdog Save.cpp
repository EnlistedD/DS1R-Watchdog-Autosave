#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

int main()
{
	//Variables
	char save = 'n';
	char time[2][16];

	LPCSTR src = "DRAKS0005.sl2";
	char * des;
	std::string tempStr;
	
	std::ifstream timefile("WDLastSave.txt");
	std::ifstream dirfile("WDSaveLocation.txt");

	//Get Last Save Time
	if (timefile.is_open())
	{
		timefile >> time[0];
		timefile >> time[1];

		timefile.close();
	}
	else
	{
		printf_s("Failed To Open Time File!\n");
		system("pause");
		return 0;
	}

	//Get Directory File
	if (dirfile.is_open())
	{
		std::getline(dirfile,tempStr);

		tempStr += "\\";
		tempStr += src;

		des = (char*)tempStr.c_str();

		dirfile.close();
	}
	else
	{
		printf_s("Failed To Open Directory File!\n");
		system("pause");
		return 0;
	}

	//Display Date + Time And Optional Load
	printf_s("Last Watchdog Save Date: %s\n", time[1]);
	printf_s("Last Watchdog Save Time: %s\n", time[0]);
	printf_s("Save Path: %s\n", des);
	printf_s("\nDo you want to load Watchdog's last save? (Y\\N)\n");

	std::cin >> save;

	system("cls");

	//If Invalid Input
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX,'\n');

		printf_s("Error Getting User Input! Please Restart The Program And Reenter Your Input\n");
		printf_s("(Value Input Example: \'y\' or \'Y\')\n");

		system("pause");

		return 0;
	}

	//Check If You Should Load Save
	switch (save)
	{
	case 'y':
	case 'Y':
		if (CopyFileA(src, des, FALSE))
			printf_s("Watchdog Sucessfully Restored Save File!\n");
		else
		{
			printf_s("Watchdog Failed To Restore Save File!\n");
			switch (GetLastError())
			{
			case ERROR_FILE_NOT_FOUND:
				printf_s("The save file Watchdog saved could not be found.\n");
				break;
			case ERROR_PATH_NOT_FOUND:
				printf_s("The system cannot find the path specified.");
				break;
			case ERROR_ACCESS_DENIED:
				printf_s("Error program can't overwrite the save file.\n");
				break;
			default:
				printf_s("Unknown error occurred.\n");
			}
		}

		system("pause");
		break;
	default:
		printf_s("Save File Was Not Loaded!\n");
		system("pause");
	}

	return 0;
}
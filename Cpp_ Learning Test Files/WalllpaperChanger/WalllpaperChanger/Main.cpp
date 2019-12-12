#include <windows.h>
#include <iostream>

using namespace std;



int main()
{
	
	// change wallpaper 
	bool isWallSet = true;
	while (isWallSet=true){
		Sleep(300);
		const wchar_t *filenm = L"C:\\Users\\walid\\Desktop\\SoundFX\\img.jpg"; //ADDRESS of first image
		isWallSet = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)filenm, SPIF_UPDATEINIFILE);
		cout << "Now" << endl;

		Sleep(300);
		const wchar_t *filenmm = L"C:\\Users\\walid\\Desktop\\SoundFX\\img.jpg"; //ADDRESS of first image
		isWallSet = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)filenmm, SPIF_UPDATEINIFILE);
		cout << "Now" << endl;

		Sleep(300);
		const wchar_t *filenmmm = L"C:\\Users\\walid\\Desktop\\SoundFX\\img.jpg"; //ADDRESS of first image
		isWallSet = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)filenmmm, SPIF_UPDATEINIFILE);
		cout << "Now" << endl;

	}
		
	



	system("pause");
	return 0;
}

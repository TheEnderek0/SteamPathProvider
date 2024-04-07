#include <iostream>
#include <sapp/SteamAppPathProvider.h>

using namespace std;

int main(int argc, char* argv[]) {
	SteamAppPathProvider provider = SteamAppPathProvider(true, false);
	int appid = 0;

	if (argc < 2) {
		return 2;
	}
	else {
		try {
			appid = stoi(argv[1]);
		}
		catch (exception err) {
			return 3;
		}
	}
	
	if (appid <= 0) {
		return 4;
	}

	if (provider.BIsAppInstalled(appid)) {
		string path;
		provider.GetAppInstallDir(appid, path, 0);
		cout << path;
		return 0;
	}
	else {
		return 1;
	}
}
# SteamPathProvider
A simple program that provides installation paths of various steam games.
Use it to your liking!
Only windows version is provided as already compiled file (in the releases tab), for linux you need to build it yourself, sorry!

Usage: `.\SteamPathProvider.exe <appid>`
Prints out the path to the specified app id game root

Error codes:
- 0 => Program ended successfully.
- 1 => User doesn't have searched appid installed.
- 2 => Searched steam appid was not passed.
- 3 => Passed steam appid is not a number.
- 4 => Passed appid is negative.
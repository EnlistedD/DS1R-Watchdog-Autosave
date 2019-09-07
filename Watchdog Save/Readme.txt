[DESCRIPTION]
This feature of Watchdog is designed to automatically create a save backup anytime the game tries to place you in a new online session so you can easily reload your save to its state before your last online session if you choose to do so.


(Note: While there should be no reason this feature messes up it's highly recommended to manually create a save backup before you use this feature of Watchdog)


[HOW TO USE]
1. Place the "Watchdog Save" folder in your DS1R game directory along with your d3d11.dll file
2. Locate your DS1R save path location (should be in Username\Documents\NBGI\DARK SOULS REMASTERED\*)
3. Copy your DS1R save path and enter it into the first line of the "WDSaveLocation.txt" file in the "Watchdog Save" folder and save that file 
(file path example: C:\Users\UserName\Documents\NBGI\DARK SOULS REMASTERED\547298373)
4. Load up the game with Watchdog active and make sure it creates the "WDLastSave.txt" file and the "DRAKS0005.sl2" file in the "Watchdog Save" folder when you enter an online session
5. If Watchdog creates these files then the feature is working correctly and Watchdog should always update these files everytime you enter a new session, if Watchdog doesn't create these files then an error has occured with this feature (make sure your save file path is correct and make sure your save file path file is located in the "Watchdog Save" folder).


[HOW TO EASILY LOAD WATCHDOG'S LAST SAVE]
1. Once you enter an online session and the "WDLastSave.txt" file and the "DRAKS0005.sl2" files have been created you can load Watchdog's last save.
2. Exit Dark Souls Remastered if it's opened
3. Navigate to the "Watchdog Save" folder and start the "Load Watchdog Save.exe" program (create a shortcut to this program for easier access)
4. Be sure the save time, date and file path are all correct and type "y" into the console window (type "n" if you want to exit the program without loading saved data)
5. Watchdog should successfully restore the last save it made and you can exit the program, if Watchdog fails to load the save be sure to check that the save file path is correct and make sure the "Load Watchdog Save.exe" file is in the same folder as the "WDSaveLocation.txt", "WDLastSave.txt" and "DRAKS0005.sl2" files.
6. (Optional)If the program fails or you want to you can manually restore your save file by navigating to your save file location and replacing the "DRAKS0005.sl2" file there with the last "DRAKS0005.sl2" file Watchdog created
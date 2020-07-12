# Minesweeper Hack Internal
A very simple example of how an internal DLL hack can be made that can be injected into a game process.

Currently there is only a single struct that has been reversed (CGame). You can alter the game timer with it, among a couple other things.

Used TSearch (can use CE) to find the address that holds the number of bombs left and used Ollydbg to set a write break point at that address to find out what writes to it, leading us to the CGame class. We then plug that CGame address into ReClass and begin inspecting various offsets and renaming them so that it can generate us a C++ class to use, which can be seen at CGame.cpp. Once our class is made, we can use it in our DLL (using the F5 hotkey in this instance) and then inject it into the game and use it at will.

*This is for an old, outdate version of Minesweeper. You can download that version here: https://www.unknowncheats.me/forum/downloads.php?do=file&id=5925. There is also a good tutorial walking through making this hack on that forum.*

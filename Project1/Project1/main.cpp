#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

#include <iostream>
#include <chrono>
#include <thread>

#include "State.h"                                                                                                                                                                                                                                                                                                                                                                                                                           

int main()
{
	Animation fsm;
	fsm.idle();

	int i = 0;

	while (true) {
		if (i == 0) {
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 1;
		}
		else if (i == 1) {
			fsm.swordsmanship();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 2;
		}
		else if (i == 2) {
			fsm.shoveling();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 3;
		}
		else if (i == 3) {
			fsm.hammering();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 4;
		}
		else if (i == 4) {
			fsm.walking();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 5;
		}
		else {
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
			i = 0;
		}
	}
}

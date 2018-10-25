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
#pragma comment(lib,"opengl32.lib") 
#pragma comment(lib,"glu32.lib") 

#include "SFML/Graphics.hpp" 
#include "SFML/OpenGL.hpp" 

#include <iostream>


#include <iostream>
#include <chrono>
#include <thread>

#include "State.h"


int main()
{
	std::cout << "Hold space to jump" << std::endl;
	std::cout << "Hold W to walk" << std::endl;
	std::cout << "Hold Q to use your sword" << std::endl;
	std::cout << "Hold E to shovel" << std::endl;
	std::cout << "Hold H to hammer" << std::endl;
	std::cout << "Hold C to climb" << std::endl;


	Animation fsm;
	fsm.idle();

	while (true) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !fsm.getClimbing()){
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
			fsm.swordsmanship();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
			fsm.shoveling();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::H)) {
			fsm.hammering();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			fsm.walking();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::C)) {
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
		}
		else
		{
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds::duration(1000));
		}
	}
}

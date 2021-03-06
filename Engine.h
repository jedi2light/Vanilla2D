/*

	MIT License

	Copyright (c) 2017 Nikita Kogut (MrOnlineCoder)

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.

	Description: Engine class loads all settings, creates window and eneters window event loop
*/


#ifndef V2D_ENGINE_H
#define V2D_ENGINE_H

#include <SFML/Graphics.hpp>
#include "Script.h"
#include "Game.h"
#include "Config.h"

#include <vector>
class Engine
{
public:
	int start();
	Engine(int argc, char* argv[]);

private:
	sf::RenderWindow window;
	std::vector<Statement> statements;

	ConfigOptions opts;
	std::string resRoot;
};

#endif
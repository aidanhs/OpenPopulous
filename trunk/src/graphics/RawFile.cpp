/*
Copyright (C) 2010 Populous Mana Source Development Team

This file is part of poplib.

poplib is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

poplib is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with poplib. If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <fstream>
#include "RawFile.h"

using namespace std;
using namespace Graphics;

RawFile::RawFile(string filename, int width, int height)
{
	mWidth = width;
	mHeight = height;

	mBuffer = new char[width * height];

	ifstream fs;
	fs.open(filename.c_str(), ios::binary);

	for (int y = 0; y < mHeight; y++) {
		for (int x = 0; x < mWidth; x++) {
			fs.read((char*)&mBuffer[y * mWidth + x], sizeof(char));
		}
	}

	fs.close();
}
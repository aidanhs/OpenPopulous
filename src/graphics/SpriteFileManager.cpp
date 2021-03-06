/********************************************************************** 
  This file is part of OpenPop

  OpenPop is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  any later version.

  OpenPop is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OpenPop.  If not, see <http://www.gnu.org/licenses/>.
***********************************************************************/

#include "..\stdafx.h"

#include "..\Config.h"
#include "SpriteFile.h"
#include "SpriteFileManager.h"

using namespace Graphics;

SpriteFileManager::SpriteFileManager()
{
	mFeboxes = new SpriteFile(gConfig->GetPopFile("Data\\fenew\\Feboxes.spr"));
	mFeboxsp = new SpriteFile(gConfig->GetPopFile("Data\\fenew\\Feboxsp.spr"));

	mHFX = new SpriteFile(gConfig->GetPopFile("Data\\hfx0-0.dat"));
	mHSPR = new SpriteFile(gConfig->GetPopFile("Data\\hspr0-0.dat"));
}

SpriteFileManager::~SpriteFileManager()
{
	delete mFeboxes;
	delete mFeboxsp;

	delete mHFX;
	delete mHSPR;
}

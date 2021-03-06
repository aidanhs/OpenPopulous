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

#include "..\OpenPop.h"

#include "Player.h"
#include "Tribe.h"
#include "World.h"
#include "GameHost.h"

using namespace Game;

GameHost::GameHost(OpenPop* openPop)
{
	mOpenPop = openPop;

	mPlayers[0] = new Player();
	mTribes[0] = new Tribe();

	mPlayers[0]->mName = "Ted";
	mPlayers[0]->mControlTribe = 0;

	mPlayerIDX = 0;

	mWorld = new World();
}

GameHost::~GameHost()
{

}

Player* GameHost::GetLocalPlayer()
{
	return mPlayers[mPlayerIDX];
}

Tribe* GameHost::GetLocalTribe()
{
	return mTribes[GetLocalPlayer()->mControlTribe];
}

void GameHost::Update()
{
	mWorld->Update();
}
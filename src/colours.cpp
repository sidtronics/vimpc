/*
   Vimpc
   Copyright (C) 2010 - 2011 Nathan Sweetman

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

   colours.hpp - provides colours for ncurses windows
   */

#include "colours.hpp"

#define BOLD(X) (8 + X)

using namespace Main;

bool Colours::InitialiseColours()
{
   static bool coloursInitialised = false;
   static bool success            = false;

   if (coloursInitialised == false)
   {
      coloursInitialised = true;

      if ((start_color() != ERR) && (use_default_colors() != ERR))
      {
         success = true;

         init_pair(Song, COLOR_WHITE, COLOR_DEFAULT);
         init_pair(SongId, COLOR_RED, COLOR_DEFAULT);
         init_pair(Directory, COLOR_RED, COLOR_DEFAULT);
         init_pair(CurrentSong, COLOR_BLUE, COLOR_DEFAULT);
         init_pair(TabWindow, COLOR_BLACK, COLOR_BLUE);
         init_pair(ProgressWindow, COLOR_RED, COLOR_DEFAULT);
         init_pair(SongMatch, COLOR_YELLOW, COLOR_DEFAULT);
         init_pair(PartialAdd, COLOR_CYAN, COLOR_DEFAULT);
         init_pair(FullAdd, COLOR_GREEN, COLOR_DEFAULT);
         init_pair(PagerStatus, COLOR_GREEN, COLOR_DEFAULT);
         init_pair(Error, COLOR_BLACK, COLOR_RED);
         init_pair(StatusLine, COLOR_BLACK, COLOR_BLUE);
      }
   }

   return success;
}

/* vim: set sw=3 ts=3: */

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

#ifndef __MAIN__COLOURS
#define __MAIN__COLOURS

#define BOLD(X) (8 + X)
#define COLOR_DEFAULT -1

#include "wincurses.h"

namespace Main
{
   class Colours
   {
      public:

      enum Property : uint8_t {
         Song = 1,
         SongId,
         Directory,
         CurrentSong,
         TabWindow,
         ProgressWindow,
         SongMatch,
         PartialAdd,
         FullAdd,
         PagerStatus,

         Error,
         StatusLine
      };

      static bool InitialiseColours();
   };
}

#endif
/* vim: set sw=3 ts=3: */

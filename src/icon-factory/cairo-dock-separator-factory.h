/*
* This file is a part of the Cairo-Dock project
*
* Copyright : (C) see the 'copyright' file.
* E-mail    : see the 'copyright' file.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 3
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef __CAIRO_DOCK_SEPARATOR_FACTORY__
#define  __CAIRO_DOCK_SEPARATOR_FACTORY__

#include <glib.h>

G_BEGIN_DECLS


/** Create an icon that will act as a separator.
*@param iSeparatorType the type of separator (CAIRO_DOCK_SEPARATOR12, CAIRO_DOCK_SEPARATOR23 or any other odd number)
*@return the newly allocated icon.
*/
Icon *cairo_dock_new_separator_icon (int iSeparatorType);


G_END_DECLS
#endif


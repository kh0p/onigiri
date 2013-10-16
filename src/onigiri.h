/*  onigiri.h
 * 
 *  Copyright (c) 2013 by Kamil Żak <defm03@outlook.jp>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ONIGIRI_H
#define ONIGIRI_H

#define CALL_PREFIX "ONIGIRI"

/**
 *  PROTOTYPES 
 */

/* Two utils for later: database of packages and version check with 
 * update etc.*/
int onigiri_database(void); 
int onigiri_version_check(void);

#endif /* ONIGIRI_H */

/***************************************************************************
 *   Copyright (C) 2015 by                                                 *
 *   - Carlos Eduardo Millani (carloseduardomillani@gmail.com)             *
 *   - Edson Borin (edson@ic.unicamp.br)                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif 
	
#include <ARCH_leds.h>
#include <avr/io.h>
	
void ledon (int led)
{
	switch (led) 
	{
		case 1:
			DDRC |= (1 << DDC3);
			PORTC |= (1 << PC3);
			break;
		case 2:
			DDRC |= (1 << DDC1);
			PORTC |= (1 << PC1);
			break;
	}
}

void ledoff (int led)
{
	switch (led) 
	{
		case 1:
			DDRC &= ~(1 << DDC3);
			PORTC &= ~(1 << PC3);
			break;
		case 2:
			DDRC &= ~(1 << DDC1);
			PORTC &= ~(1 << PC1);
			break;
	}
}
	
#ifdef __cplusplus
}
#endif
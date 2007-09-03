/* libxtract feature extraction library
 *  
 * Copyright (C) 2006 Jamie Bullock
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, 
 * USA.
 */

#include "xtract/libxtract.h"
#include <stdio.h>

int main(void) {

    float mean = 0, vector[] = {1, 2, 3};
    
    xtract[XTRACT_MEAN]((void *)&vector, 3, NULL, (void *)&mean);

    printf("\nThe mean of [1, 2, 3] = %.1f\n\n", mean);
	
    return 0;
    
}

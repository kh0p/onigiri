/*  onigiri.c
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

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <string.h>

#include "onigiri.h"

static void optargs_parser(int argc, char **argv) {
	int aflag = 0;
	int bflag = 0;
	char *cvalue = NULL;
	int index;
	int c;

	opterr = 0;
	
	/* Start of a loop which scopes throught aruments until getopt
	 * returns -1, indicating no more options are present. */
	while ((c = getopt(argc, argv, "abc:")) != -1) {
		switch (c) {
			case 'a':
				aflag = 1;
				break;
			case 'b':
				bflag = 1;
				break;
			case 'c':
				cvalue = optarg;
				break;
			case '?':
				if (optopt == 'c') {
					fprintf (stderr, "Option -%c requires an argument.\n", optopt);
				}
				else if (isprint (optopt)) {
					fprintf(stderr, "Unknown option `-%c`.\n", optopt);
				}
				else {
					fprintf(stderr, "Unknown option character`\\x%x`.\n", option);
				}
				return 1;
			default:
				abort ();
		}

		/* Retruns string if you don't enter a option */
		for (index = optind; index < argc; index++) {
			printf ("Non-option argument %s\n", argv[index]);
		}
		return 0;
	}
}

static void arg_qsort(void) {
}

int main (int argc, char **argv) {
	optargs_parser(int argc, char **argv);
	return 0;
}
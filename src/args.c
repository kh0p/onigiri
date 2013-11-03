/**
 * args.c
 *
 * @author: Kamil Żak (楊文里) <defm03@outlook.jp>
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @date: 2013-11-03
 */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct onelet_args {
    char *args;
    int length;
};

struct onelet_args *olargs_create (char *args, int length)
{
    struct onelet_args *list = malloc(sizeof(struct onelet_args));
    assert(list != NULL);

    list->args = args;
    list->length = length;

    return list;
}

void olargs_destroy (struct onelet_args *list)
{
    assert(list != NULL);

    free(list->args);
    free(list);
}

int length_ofarg (char *arg)
{
    length = sizeof(arg) / sizeof(char);

    return length;
}

void Parse_args(int argc, const char *argv[])
{
    int i, j = 0;

    for (i = 1; i < argc; i++) {
        // If there is only one '-' it classify argv as a string
        // of one letter args.
        if (argv[i][0] == '-' && argv[i][1] != '-') {
            int length = length_ofarg(argv[i]) - 1;
            for (j = 1; j < length; j++) {
                struct onelet_args *onelet_only (
                        argv[i], length)
            }
        }

        // If there are to '-', then it classify argv as a
        // actuall word string.
        if (argv[i][0] == '-' && argv[i][1] == '-') {
            int length = length_ofarg(argv[i]) - 2;
            for (j = 2; j < length; j++) {
                struct onelet_args *onelet_only (
                        argv[i], length)
            }
        }
    }
}

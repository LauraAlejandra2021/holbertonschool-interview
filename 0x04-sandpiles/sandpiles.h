#ifndef _SANDPILES_
#define _SANDPILES_

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


/* ------ Prototypes -------- */

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
void grid_sum(int grid1[3][3], int grid2[3][3]);
void grid_print(int grid[3][3]);
int grid_is_stable(int grid[3][3]);
void grid_toppled(int grid1[3][3]);


#endif

#include <stdlib.h>
#include <stdio.h>

typedef struct s_point
{
    int x;
    int y;
} t_point;

void flood_fill_helper(char **tab, t_point size, t_point pos, char target, char fill)
{
    // Check for boundary conditions and if the cell is already filled or invalid
    if (pos.x < 0 || pos.x >= size.x || pos.y < 0 || pos.y >= size.y)
        return;
    if (tab[pos.y][pos.x] != target)
        return;
    
    // Fill the current cell
    tab[pos.y][pos.x] = fill;
    
    // Recursively fill adjacent cells
    flood_fill_helper(tab, size, (t_point){pos.x + 1, pos.y}, target, fill); // Right
    flood_fill_helper(tab, size, (t_point){pos.x - 1, pos.y}, target, fill); // Left
    flood_fill_helper(tab, size, (t_point){pos.x, pos.y + 1}, target, fill); // Down
    flood_fill_helper(tab, size, (t_point){pos.x, pos.y - 1}, target, fill); // Up
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char target_char = tab[begin.y][begin.x]; // Character to be replaced
    char fill_char = 'F'; // Character to fill with

    // Start the flood fill
    flood_fill_helper(tab, size, begin, target_char, fill_char);
}

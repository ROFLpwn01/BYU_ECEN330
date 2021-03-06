/*
This software is provided for student assignment use in the Department of
Electrical and Computer Engineering, Brigham Young University, Utah, USA.

Users agree to not re-host, or redistribute the software, in source or binary
form, to other persons or other institutions. Users may modify and use the
source code for personal or educational use.

For questions, contact Brad Hutchings or Jeff Goeders, https://ece.byu.edu/
*/

#ifndef TICTACTOEDISPLAY_H_
#define TICTACTOEDISPLAY_H_

#include <stdbool.h>
#include <stdint.h>

// Inits the tic-tac-toe display, draws the lines that form the board.
void ticTacToeDisplay_init();

// Draws an X at the specified row and column.
// erase == true means to erase the X by redrawing it as background. erase ==
// false, draw the X as foreground.
void ticTacToeDisplay_drawX(uint8_t row, uint8_t column, bool erase);

// Draws an O at the specified row and column.
// erase == true means to erase the X by redrawing it as background. erase ==
// false, draw the X as foreground.
void ticTacToeDisplay_drawO(uint8_t row, uint8_t column, bool erase);

// After a touch has been detected and after the proper delay, this sets the row
// and column arguments according to where the user touched the board.
void ticTacToeDisplay_touchScreenComputeBoardRowColumn(uint8_t *row,
                                                       uint8_t *column);

// Runs a test of the display. Does the following.
// Draws the board. Each time you touch one of the screen areas, the screen will
// paint an X or an O, depending on whether switch 0 (SW0) is slid up (O) or
// down (X). When BTN0 is pushed, the screen is cleared. The test terminates
// when BTN1 is pushed.
void ticTacToeDisplay_runTest();

// This will draw the four board lines.
void ticTacToeDisplay_drawBoardLines();

#endif /* TICTACTOEDISPLAY_H_ */
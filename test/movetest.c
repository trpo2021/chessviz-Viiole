#include "libchessviz/board.h"
#include "libchessviz/move.h"
#include <ctest.h>
#include <string.h>

CTEST(movechess_suite, success_exit)
{
    char board[9][9];
    fillBoard(board);

    char testStep[11];
    strcpy(testStep, "e2-e4");

    int testExp = SUCCESS;

    int testResult = move(board, testStep);

    ASSERT_EQUAL(testExp, testResult);
}

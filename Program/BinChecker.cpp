////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) LTX Corporation  2009
//               ALL RIGHTS RESERVED
//
////////////////////////////////////////////////////////////////////////////////
//
// Author:      <your name>
// Module:      <uniqueName>AUT.cpp
// Created:     <date>
//
// Description: This is an example on how to do a application unit test
//
// History:     Date           Comments
//              --------  ---  ------------------------------------------------
//              06/11/07       Initial implementation by juliet
//              12/16/09       Russ P. SPR127519
//
// How to run:
//   <uniqueName>AUT.ut -target <os> -tester <tester> -verbose -bin <bin number>
//
////////////////////////////////////////////////////////////////////////////////


// IMPORT -- LOCAL LIBRARIES ***************************************************

#include <unit_test/LtxAutMacros.h>

// SPR127519. Must include expected BIN with AUT
SIMPLE_LOAD_RUN_APPLICATION("BinChecker.una", 1 );

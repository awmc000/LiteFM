// // // // // // 
//             //
//   LITE FM   //
//             //
// // // // // //

/*
 * ---------------------------------------------------------------------------
 *  File:        signalhandling.h
 *
 *  Description: Header file for handling signals that might
 *               lead to unexpected errors or issues
 *
 *  Author:      nots1dd
 *  Created:     <03/08/24>
 * 
 *  Copyright:   <2024> nots1dd. All rights reserved.
 * 
 *  License:     <GNU GPL v3>
 *
 *  Notes:       This header provides function declarations for signwinch,
 *               the signal sent to terminal when a resizing event occurs.
 *
 *  Revision History:
 *      <03/08/24> - <Initial Creation>
 *
 * ---------------------------------------------------------------------------
 */

#ifndef SIGNAL_HANDLING_H
#define SIGNAL_HANDLING_H

#include <signal.h>
#include <sys/wait.h>
#include <errno.h>
#include <stddef.h>

void ignore_sigwinch();
void restore_sigwinch();

#endif
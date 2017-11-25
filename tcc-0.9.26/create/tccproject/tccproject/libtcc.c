//
//  libtcc.c
//  tccproject
//
//  Created by eddy.wu on 11/24/17.
//  Copyright © 2017 eddy.wu. All rights reserved.
//

#include <stdio.h>
#include "libtcc.h"
#include "tcc.h"


/********************************************************/
/* global variables */

/* use GNU C extensions */
ST_DATA int gnu_ext = 1;

/* use TinyCC extensions */
ST_DATA int tcc_ext = 1;

/* XXX: get rid of this ASAP */
ST_DATA struct TCCState *tcc_state;

/********************************************************/


LIBTCCAPI TCCState *tcc_new(void)
{
    TCCState *s;
    char buffer[100];
    int a,b,c;

    return s;

}

static void tcc_cleanup(void)
{
    int i, n;
    if (NULL == tcc_state)
        return;
    tcc_state = NULL;

    
}
// ----------------------------------------------------------------------
// Pong
// ----------------------------------------------------------------------

// ----------------------------------------------------------------------
// Include Files
// ----------------------------------------------------------------------

#include "framework.h"
#include "uart.h"
#include "pong.h"
#include "moduleenable.h"

#ifdef MODULE_ENABLE_PONG

struct Pong_t Pong;

// ----------------------------------------------------------------------
// load pong
void loadPong( unsigned short* frameBuffer, unsigned char* playerCount )
{
	cls();
	unsigned char x=8, y=8, r=4;
	circle( &x, &y, &r, &PINK );
}

// ----------------------------------------------------------------------
// process pong main loop
void processPongLoop( void )
{
	//endGame(); // remove this
}

// ----------------------------------------------------------------------
// process pong input
void processPongInput( void )
{
}

// ----------------------------------------------------------------------
// draws the menu icon for pong
void drawPongMenuIcon( void )
{
}
#endif // GAME_ENABLE_PONG

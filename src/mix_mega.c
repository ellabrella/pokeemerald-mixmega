#include "mix_mega.h"
#include "global.h"
#include "constants/species.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/abilities.h"

// mix and mega ROM data
#include "data/mix_mega.h"

// This is a function to determine which mega evolution data matches up with each item.
// If you add a new mega evolution triggered by an item, make sure to add it to this list.
// You can add your new "case" anywhere in this list before the "default" statement.
u8 ItemIdToMegaStoneId(u16 item)
{
	
	switch(item)
	{
		case ITEM_VENUSAURITE:
            return STONE_VENUSAURITE;
		case ITEM_CHARIZARDITE_X:
            return STONE_CHARIZARDITE_X;
		case ITEM_CHARIZARDITE_Y:
            return STONE_CHARIZARDITE_Y;
		case ITEM_BLASTOISINITE:
            return STONE_BLASTOISINITE;
		case ITEM_BEEDRILLITE:
            return STONE_BEEDRILLITE;
		case ITEM_PIDGEOTITE:
            return STONE_PIDGEOTITE;
		case ITEM_ALAKAZITE:
            return STONE_ALAKAZITE;
		case ITEM_SLOWBRONITE:
            return STONE_SLOWBRONITE;
		case ITEM_GENGARITE:
            return STONE_GENGARITE;
		case ITEM_KANGASKHANITE:
            return STONE_KANGASKHANITE;
		case ITEM_PINSIRITE:
            return STONE_PINSIRITE;
		case ITEM_GYARADOSITE:
            return STONE_GYARADOSITE;
		case ITEM_AERODACTYLITE:
            return STONE_AERODACTYLITE;
		case ITEM_MEWTWONITE_X:
            return STONE_MEWTWONITE_X;
		case ITEM_MEWTWONITE_Y:
            return STONE_MEWTWONITE_Y;
		case ITEM_AMPHAROSITE:
            return STONE_AMPHAROSITE;
		case ITEM_STEELIXITE:
            return STONE_STEELIXITE;
		case ITEM_SCIZORITE:
            return STONE_SCIZORITE;
		case ITEM_HERACRONITE:
            return STONE_HERACRONITE;
		case ITEM_HOUNDOOMINITE:
            return STONE_HOUNDOOMINITE;
		case ITEM_TYRANITARITE:
            return STONE_TYRANITARITE;
		case ITEM_SCEPTILITE:
            return STONE_SCEPTILITE;
		case ITEM_BLAZIKENITE:
            return STONE_BLAZIKENITE;
		case ITEM_SWAMPERTITE:
            return STONE_SWAMPERTITE;
		case ITEM_GARDEVOIRITE:
            return STONE_GARDEVOIRITE;
		case ITEM_SABLENITE:
            return STONE_SABLENITE;
		case ITEM_MAWILITE:
            return STONE_MAWILITE;
		case ITEM_AGGRONITE:
            return STONE_AGGRONITE;
		case ITEM_MEDICHAMITE:
            return STONE_MEDICHAMITE;
		case ITEM_MANECTITE:
            return STONE_MANECTITE;
		case ITEM_SHARPEDONITE:
            return STONE_SHARPEDONITE;
		case ITEM_CAMERUPTITE:
            return STONE_CAMERUPTITE;
		case ITEM_ALTARIANITE:
            return STONE_ALTARIANITE;
		case ITEM_BANETTITE:
            return STONE_BANETTITE;
		case ITEM_ABSOLITE:
            return STONE_ABSOLITE;
		case ITEM_GLALITITE:
            return STONE_GLALITITE;
		case ITEM_SALAMENCITE:
            return STONE_SALAMENCITE;
		case ITEM_METAGROSSITE:
            return STONE_METAGROSSITE;
		case ITEM_LATIASITE:
            return STONE_LATIASITE;
		case ITEM_LATIOSITE:
            return STONE_LATIOSITE;
		case ITEM_LOPUNNITE:
            return STONE_LOPUNNITE;
		case ITEM_GARCHOMPITE:
            return STONE_GARCHOMPITE;
		case ITEM_LUCARIONITE:
            return STONE_LUCARIONITE;
		case ITEM_ABOMASITE:
            return STONE_ABOMASITE;
		case ITEM_GALLADITE:
            return STONE_GALLADITE;
		case ITEM_AUDINITE:
            return STONE_AUDINITE;
		case ITEM_DIANCITE:
            return STONE_DIANCITE;
		case ITEM_BLUE_ORB:
			return STONE_BLUE_ORB;
		case ITEM_RED_ORB:
			return STONE_RED_ORB;
        default:
            return STONES_COUNT;
	}
	
}

#include "ASCIIColor.h"


Soil::ASCIIColor::ASCIIColor(uint_fast8_t ansi4BitColor, 
                             uint_fast8_t ansi8BitColorFG, 
                             uint_fast8_t ansi8BitColorBG,
                             Soil::ANSITrueColor ansi24BitTruecolorFG, 
                             Soil::ANSITrueColor ansi24BitTruecolorBG, 
                             ANSIColorDepth preferredColorDepth) :

                             ansi4BitColor{ ansi4BitColor }, 
                             ansi8BitColorFG{ ansi8BitColorFG},
                             ansi8BitColorBG{ ansi8BitColorBG },
                             ansi24BitTruecolorFG{ ansi24BitTruecolorFG },
                             ansi24BitTruecolorBG{ ansi24BitTruecolorBG },
                             preferredColorDepth{ preferredColorDepth } 
{
}

bool Soil::ASCIIColor::operator==(ASCIIColor& other) {
	if (this->ansi4BitColor == other.ansi4BitColor && 
	    this->ansi8BitColorFG == other.ansi8BitColorFG && 
	    this->ansi8BitColorBG == other.ansi8BitColorBG &&
	    this->ansi24BitTruecolorFG == other.ansi24BitTruecolorFG &&
	    this->ansi24BitTruecolorBG == other.ansi24BitTruecolorBG &&
	    this->preferredColorDepth == other.preferredColorDepth)
	{
		return true;
	}
	return false;
}

bool Soil::ASCIIColor::operator!=(ASCIIColor& other) {
	if (this->ansi4BitColor == other.ansi4BitColor &&
	    this->ansi8BitColorFG == other.ansi8BitColorFG &&
	    this->ansi8BitColorBG == other.ansi8BitColorBG &&
	    this->ansi24BitTruecolorFG == other.ansi24BitTruecolorFG &&
	    this->ansi24BitTruecolorBG == other.ansi24BitTruecolorBG &&
	    this->preferredColorDepth == other.preferredColorDepth)
	{
		return false;
	}
	return true;
}
